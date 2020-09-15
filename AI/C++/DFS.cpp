#include<iostream>
#include<list>
#include<iterator>
#include<stdlib.h>
#include <vector>
#include <stack>
using namespace std;

class Graph
{
public:
	int nVertices;
	list<int>* adjLists;

public:
	Graph(int V);
	void addEdge(int src, int dest);
	void DFS(int vertex);
};

Graph::Graph(int V)
{
	nVertices = V;
	adjLists = new list<int>[V];
}
void Graph::addEdge(int src, int dest)
{
	adjLists[src].push_back(dest);
}
void Graph::DFS(int vertex)
{
	vector<bool> visited(nVertices, false);
	list<int> adjList = adjLists[vertex];
	stack<int> stack;
	stack.push(vertex);
	while (!stack.empty())
	{
		vertex = stack.top();
		stack.pop();
		if (!visited[vertex])
		{
			cout << vertex << " ";
			visited[vertex] = true;
		}

		list<int>::iterator i;
		for (i = adjList.begin(); i != adjList.end(); ++i)
		{
			if (!visited[*i])
				stack.push(*i);
		}
	}
}

int main()
{
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(0, 3);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	g.DFS(2);
	return 0;
}