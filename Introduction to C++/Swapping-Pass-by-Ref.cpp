// Swapping by passing by reference

#include<iostream>
#include<conio.h>
using namespace std;
void swap(int& a, int& b);
void main()
{
	int a, b;
	cout << "Enter the the two numbers" << endl;
	cin >> a >> b;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	swap(a, b);
	cout << "After swapping" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}