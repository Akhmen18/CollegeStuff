#include<iostream>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

void knapsack(int W, int w[], int val[], int n)
{
	int c[10][10];
	for (int i = 0; i < W; i++)
	{
		c[0][i] = 0;
	}
	for (int i = 0; i < W; i++)
	{
		c[i][0] = 0;
	}
	for (int i = 0; i < n; i++)
	{ 
		for (int j = 0; j < W; j++) {
			if (w[i] < W)
			{
				if (val[i] + c[i - 1])
				{
					c[i, j] = val[i] + c[i - 1, j - w[i]];
				}
				else
					c[i, j] = c[i - 1, j];
			}
			else
				c[i, j] = c[i - 1, j];
		}
		
	}
	cout << c[n][W];

}
void main()
{
	int w[3] = { 60,40,30 };
	int val[3] = { 120,122,111 };
	knapsack(100, w, val, 3);
}