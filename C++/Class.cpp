#include<iostream>
#include<conio.h>
using namespace std;

class hello
{
public:
	int a, b;
public:
	void get(int x, int y)
	{
		a = x;
		b = y;

		cout << "Object with values " << a << " & " << b << " created";
	}
};

void main()
{
	hello o1;
	o1.get(3, 4);
	_getch();
}