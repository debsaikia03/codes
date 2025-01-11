from collections import deque

def is_valid_state(x, y, a, b):
    """Check if the current state is valid based on jug capacities."""
    return 0 <= x <= a and 0 <= y <= b

def bfs_water_jug(a, b, c):
    """
    Solve the Water Jug Problem using Breadth-First Search.

    Parameters:
    a (int): Capacity of Jug A.
    b (int): Capacity of Jug B.
    c (int): Desired amount of water.

    Returns:
    path (list of tuples): Sequence of states from initial state to goal state.
    actions (list): Actions taken to achieve the goal.
    """
    # BFS queue, storing tuples of (current_state, path_so_far, actions)
    queue = deque([((0, 0), [], [])])
    visited = set()

    while queue:
        (x, y), path, actions = queue.popleft()

        # If we have reached a goal state, return the path and actions
        if x == c or y == c:
            path.append((x, y))
            return path, actions

        # Skip already visited states
        if (x, y) in visited:
            continue

        visited.add((x, y))
        path.append((x, y))

        # Possible actions and next states
        next_moves = [
            ((a, y), "Fill Jug A"),
            ((x, b), "Fill Jug B"),
            ((0, y), "Empty Jug A"),
            ((x, 0), "Empty Jug B"),
            ((max(0, x - (b - y)), min(b, x + y)), "Pour A -> B"),
            ((min(a, x + y), max(0, y - (a - x))), "Pour B -> A"),
            ((x // 2, y), "Throw Half Jug A"),
            ((x, y // 2), "Throw Half Jug B")
        ]

        for (new_x, new_y), action in next_moves:
            if is_valid_state(new_x, new_y, a, b):
                queue.append(((new_x, new_y), path.copy(), actions + [action]))

    return None, None  # No solution found

if __name__ == "__main__":
    A = int(input("Enter capacity of Jug A: "))
    B = int(input("Enter capacity of Jug B: "))
    C = int(input("Enter target amount of water: "))

    path, actions = bfs_water_jug(A, B, C)

    if path and actions:
        print("\nPath to reach goal:")
        for i in range(len(path) - 1):
            print(f"{path[i]} -{i + 1}-> {path[i + 1]} ({actions[i]})")
    else:
        print("No solution found.")
