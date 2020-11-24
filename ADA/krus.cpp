#include<iostream>
#include<algorithm>
using namespace std;
class Edge
{
public:
	int weight;
	int src;
	int dest;

	void setVal(int W, int src1, int dest1)
	{
		weight = W;
		src = src1;
		dest = dest1;
	}
};
bool compare(Edge n1, Edge n2)
{
	return(n1.weight < n2.weight);
}

int findParent(int n, int *parent)
{
	if (parent[n] == n)
	{
		return n;
	}
	return findParent(parent[n], parent);
}

void kruskal(Edge* input, int n, int E)
{
	sort(input, input + E,compare);
	Edge* output = new Edge[n - 1];
	int *parent = new int[n];
	for (int i = 0; i < n; i++)
	{
		parent[i] = i;
		cout << parent[i];
	}
	int count = 0;
	int i = 0;
	while (count != (n - 1))
	{
		Edge currentEdge = input[i];
		//check if we can add this edge to MST. We need to find parent for that.
		int srcparent = findParent(currentEdge.src, parent);
		int destparent = findParent(currentEdge.dest, parent);

		if (srcparent != destparent)
		{
			output[count] = currentEdge;
			count++;
			parent[srcparent] = destparent;
		}
		i++;
		for (int i = 0; i < n - 1; i++)
		{
			if(output[i].src<output[i].dest)
				cout << output[i].src << " " << output[i].dest << " " << output[i].weight << endl;
			else
				cout << output[i].dest << " " << output[i].src << " " << output[i].weight << endl;
		}

	}
}

int main()
{
	int n, E;
	cin >> n >> E;
	Edge* input = new Edge[E];
	for (int i = 0; i < E; i++)
	{
		int s, d, w;
		cout << "W S D";
		cin >> w >> s >> d;
		input[i].setVal(w, s, d);
	}
	kruskal(input, n, E);
}