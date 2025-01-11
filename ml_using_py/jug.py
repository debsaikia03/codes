from collections import deque


def bfs(a, b, c):

    queue = deque([(0,0)])

    visited = set((0,0))

    parent = {(0,0): None}
    action = {(0,0): None}

    while queue:
        
        x, y = queue.popleft()

        if x == c or y == c
           
           path = []

           while(x , y) is not None:
               
               path.append((x,y))

               
             