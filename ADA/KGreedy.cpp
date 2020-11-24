#include<iostream>
#include<algorithm>
using namespace std;
class item
{
public:
	int weight;
	int profit;
	double cost;

	void setVal(int w,int v)
	{
		weight = w;
		profit = v;
		cost = (double)profit / weight;
	}
};
bool compare(item i1, item i2) {
	return (i1.cost > i2.cost);
}

void knapsack(item a[], int m)
{
	double P = 0.0;
	for (int i = 0; i < 5; i++)
	{
		int w, v;
		cout << "enter vals for item" << i<< endl;
		cin >> w >> v;
		a[i].setVal(w, v);
	}
	sort(a, a + 5, compare);

	for (int i = 0; i < 5; i++)
	{
		if (m > 0 && a[i].weight <= m)
		{
			m = m - a[i].weight;
			P = P + a[i].profit;
		}
		else if (m > 0 && a[i].weight > m)
		{
			P = P + (a[i].cost * m);
			m = m - m;
		}
		else
			break;
	}
	cout << "total profit" << P;
}

int main()
{
	item a[5];
	knapsack(a, 60);
}