#include<iostream>
#include<list>
#include<iterator>
#include<stdlib.h>
using namespace std;

class Graph
{
public:
	int nVertices;
	list<int>* adjLists;
	bool* visited;

public:
	Graph(int V);
	void addEdge(int src, int dest);
	void BFS(int vertex);
};

Graph::Graph(int V)
{
	nVertices = V;
	adjLists = new list<int>[V];
	visited = new bool[nVertices];
}
void Graph::addEdge(int src, int dest)
{
	adjLists[src].push_back(dest);
	adjLists[dest].push_back(src);
}
void Graph::BFS(int vertex)
{
	for (int i = 0; i < nVertices; i++)
	{
		visited[i] = false;
	}

	list<int> queue;

	visited[vertex] = true;
	queue.push_back(vertex);

	while (!queue.empty())
	{
		int cVertex = queue.front();
		cout << "Visited " << cVertex << endl;
		queue.pop_front();

		list<int>::iterator i;
		for (i = adjLists[cVertex].begin(); i != adjLists[cVertex].end(); i++)
		{
			int adjV = *i;
			if (!visited[adjV])
			{
				visited[adjV] = true;
				queue.push_back(adjV);
			}
		}
	}
}

int main()
{
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);
	g.BFS(2);
	return 0;
}