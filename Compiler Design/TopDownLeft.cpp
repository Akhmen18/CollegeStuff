#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void _E(); //using _E cause E() is a built-in funtion
void T();
void E_();	// E'()
void T_();
void F();
string input;
int error;
int i;
int main()
{
	for (int j = 0; j < 2; j++)
	{
		i = 0, error = 0;
		cout << "Enter input: ";
		cin >> input;
		_E();
		if (input.length() == i && error == 0)
			cout << "Accepted" << endl;
		else
			cout << "Rejected" << endl;
	}
}
void _E()
{
	T();
	E_();
}
void E_()
{
	if (input[i] == '+')
	{
		i++;
		T();
		E_();
	}
}
void T()
{
	F();
	T_();
}
void T_()
{
	if (input[i] == '*')
	{
		i++;
		F();
		T_();
	}
}
void F()
{
	if(isalnum(input[i]))
		i++;
	else if (input[i] == '(')
	{
		i++;
		_E();
		if (input[i] == ')')
			i++;

		else error = 1;
	}
	else error = 1;
}