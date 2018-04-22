#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int a, b, c;
	cout << "Enter the three numbers";
	cin >> a >> b >> c;
	if (a > b)
	{
		if (a > c)
		{
			cout << "Greatest is " << a;
		}
		else 
		{
			cout << "Greatest is " << c;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "Greatest is " << b;
		}
		else
		{
			cout << "Greatest is " << c;
		}
	}

	_getch();
}