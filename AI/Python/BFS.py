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

VISITED = []  # List keep track of visited nodes
queue = []  # Queue Initialisation


# Recursive BFS
def BFS(vis, g, node):
    vis.append(node)
    queue.append(node)

    while queue:
        s = queue.pop(0)
        print(s)

        for n in g[s]:
            if n not in vis:
                vis.append(n)
                queue.append(n)


# Driver code
BFS(VISITED, GRAPH, 'S')
