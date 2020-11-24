#include<iostream>
#include<algorithm>
using namespace std;
class item
{
public:
	int weight;
	int profit;

	void setVal(int w, int v)
	{
		weight = w;
		profit = v;

	}
};

int knapsack(item a[], int W,int n)
{
	if (n==0 || W == 0)
		return 0;
	if (a[n-1].weight > W)
		return knapsack(a,W,n-1);
	else return max(a[n-1].profit+ knapsack(a,W - a[n - 1].weight, n - 1), knapsack(a,W, n - 1));
}

int main()
{
	item a[3];
	for (int i = 0; i < 3; i++)
	{
		int w, v;
		cout << "enter vals for item" << i << endl;
		cin >> w >> v;
		a[i].setVal(w, v);
	}
	cout<<knapsack(a, 300,3);
}