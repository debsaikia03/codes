from collections import deque

def bfs(a, b, c):
    # Initialize the queue with the initial state (0, 0)
    queue = deque([(0, 0)])
    # Set to track visited states
    visited = set((0, 0))
    # Dictionary to store the path
    parent = {(0, 0): None}
    # Dictionary to store the action taken to reach each state
    action = {(0, 0): None}

    while queue:
        x, y = queue.popleft()

        # Check if we have reached the goal state
        if x == c or y == c:
            path = []
            while (x, y) is not None:
                path.append((x, y))
                x, y = parent[(x, y)]
            path.reverse()
            return path, len(path) - 1

        # List of possible actions
        possible_actions = [
            (a, y),  # Fill jug A
            (x, b),  # Fill jug B
            (0, y),  # Empty jug A
            (x, 0),  # Empty jug B
            (x - min(x, b - y), y + min(x, b - y)),  # Pour A -> B
            (x + min(y, a - x), y - min(y, a - x)),  # Pour B -> A
            (x // 2, y),  # Throw half water from jug A
            (x, y // 2)   # Throw half water from jug B
        ]

        for new_x, new_y in possible_actions:
            if (new_x, new_y) not in visited:
                visited.add((new_x, new_y))
                queue.append((new_x, new_y))
                parent[(new_x, new_y)] = (x, y)
                action[(new_x, new_y)] = (x, y)

    return None, -1

# Input from the user
A = int(input("Enter capacity of jug A: "))
B = int(input("Enter capacity of jug B: "))
C = int(input("Enter the target amount: "))

path, steps = bfs(A, B, C)
if path:
    print("Path to reach the goal state:")
    for state in path:
        print(state)
    print(f"Number of steps: {steps}")
else:
    print("No solution found.")