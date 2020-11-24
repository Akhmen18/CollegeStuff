#include <iostream>
using namespace std;

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int getKnapsackProfit(int m, int profits[], int weights[], int n)
{
	int K[50][50];
	for (int i = 0; i < m; i++)
	{
		K[0][i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		K[i][0] = 0;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			K[i][j] = K[i - 1][j];
			if ((j >= weights[i - 1]) && (K[i][j] < K[i - 1][j - weights[i-1]] + profits[i-1])) {
				K[i][j] = K[i - 1][j - weights[i - 1]] + profits[i - 1];
			}
		}
	}
	cout << "FINAL" << K[n][m];
	return K[n][m];
}


int main()
{
	int n;
	cout << "Enter number of items: ";
	cin >> n;
	int profits[10], weights[10];
	cout << "Enter profit values of items: ";
	for (int i = 0; i < n; i++)
		cin >> profits[i];
	cout << "Enter weight values of items: ";
	for (int i = 0; i < n; i++)
		cin >> weights[i];
	int m;
	cout << "Enter capacity of the Knapsack: ";
	cin >> m;
	int profit = getKnapsackProfit(m, profits, weights, n);
	cout << "\nMaximum Profit = " << profit;
	return 0;
}