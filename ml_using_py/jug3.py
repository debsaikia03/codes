from collections import deque

def water_jug_problem(A, B, C):
    
    def get_next_states(state):
        x, y = state  # x: water in jug A, y: water in jug B
        states = set()

        # Action 1: Fill either jug completely
        states.add((A, y))  
        states.add((x, B))  

        # Action 2: Empty either jug completely
        states.add((0, y))  
        states.add((x, 0))  

        # Action 3: Pour water from one jug to the other
        pour_to_b = min(x, B - y)  
        states.add((x - pour_to_b, y + pour_to_b))

        pour_to_a = min(y, A - x)  
        states.add((x + pour_to_a, y - pour_to_a))

        # Action 4: Throw half water from either jug
        if x > 0:
            states.add((x // 2, y))  
        if y > 0:
            states.add((x, y // 2)) 

        return states

    def bfs(initial_state):
        queue = deque([(initial_state, [])])  # (current_state, path_to_state)
        visited = set([initial_state])

        while queue:
            current_state, path = queue.popleft()
            x, y = current_state

            # Check if the goal state is reached
            if x == C or y == C:
                return path + [current_state]

            for next_state in get_next_states(current_state):
                if next_state not in visited:
                    visited.add(next_state)
                    queue.append((next_state, path + [current_state]))

        return None

    initial_state = (0, 0)
    result = bfs(initial_state)

    if result:
        for i in range(len(result) - 1):
            print(f"{result[i]} -> {result[i + 1]}")
        print(f"Goal reached: {result[-1]}")
        print(f"Number of steps: {len(result) - 1}")
    else:
        print("No solution found.")

A = int(input("Enter capacity of jug A: "))
B = int(input("Enter capacity of jug B: "))
C = int(input("Enter target amount C: "))

if C > max(A, B):
    print("It's impossible to measure this amount with the given jugs.")
else:
    water_jug_problem(A, B, C)
