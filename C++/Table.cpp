#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout << "Enter number ";
	cin >> a;
	for (int i = 0; i <= 10; i++)
	{
		cout << a << "*" << i << "=" << a * i << endl;
	}
	_getch();
}