GRAPH = {
        'S': ['A', 'B', 'C'],
        'A': ['D'],
        'B': ['E'],
        'C': ['F'],
        'D': ['G'],
        'E': [],
        'F': [],
        'G': []
}


# Recursive DFS
def dfs(node):
    if node not in VISITED:                 # Check for Visited Node
        print(node)
        VISITED.add(node)                   # Add node if Visited
        for adjacent in GRAPH[node]:        # apply dfs
            dfs(adjacent)


VISITED = set()
print('Recursive Depth First Search')
dfs('S')