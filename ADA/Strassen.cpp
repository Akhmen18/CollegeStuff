#include <iostream>
using namespace std;

void Multiply(int a[2][2], int b[2][2])
{
	int p1 = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
	int p2 = (a[1][0] + a[1][1]) * b[0][0];
	int p3 = a[0][0] * (b[0][1] - b[1][1]);
	int p4 = a[1][1] * (b[1][0] - b[0][0]);
	int p5 = (a[0][0] + a[0][1]) * b[1][1];
	int p6 = (a[1][0] - a[0][0]) * (b[0][0] + b[0][1]);
	int p7 = (a[0][1] - a[1][1]) * (b[1][0] + b[1][1]);

	int c[2][2];
	c[0][0] = p1 + p4 - p5 + p7;
	c[0][1] = p3 + p5;
	c[1][0] = p2 + p4;
	c[1][1] = p1 - p2 + p3 + p6;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << c[i][j]<<" ";
		}
		cout << endl;
	}
}

int main()
{
	int p, q, r, s;
	cout << "Enter the dimensions of Matrices";
	int A[2][2];
	int B[2][2];
	cout << "Enter the elements of Matrix A";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> A[i][j];
		}
	}

	cout << "Enter the elements of Matrix B";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> B[i][j];
		}
	}

	Multiply(A, B);
	return 0;
}