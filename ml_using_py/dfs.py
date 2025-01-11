def dfs_rec(graph, visited, curr):
    visited[curr] = True
    print(curr, end=" ")

    for i in graph[curr]:
        if not visited[i]:
            dfs_rec(graph, visited, i)

def dfs(graph, src):
    visited = [False] * len(graph) 
    dfs_rec(graph, visited, src)   

def add_edge(graph, s, t):
    graph[s].append(t)
    graph[t].append(s)

if __name__ == "__main__":
    V = 5  # Number of vertices

    graph = [[] for _ in range(V)]  # Create adjacency list for V vertices

    edges = [[1, 2], [1, 0], [2, 0], [2, 3], [2, 4]]  # List of edges

    for e in edges:
        add_edge(graph, e[0], e[1])

    src = 0  # Starting point for DFS
    print("DFS from source:", src)
    dfs(graph, src)  # Perform DFS
