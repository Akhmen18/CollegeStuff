#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
#define max 10
int dfa[max][max];
int ninputs;
int c[max],mystring[max];
int check(char b, int d);
using namespace std;
int main()
{
	int nstates,nfinals;
	cout << "enter number of states of a dfa" << endl;
	cin >> nstates;
	cout << "Enter number of inputs" << endl;
	cin >> ninputs;
	int inputs[max],finals[max];
	for (int i = 0; i < ninputs; i++)
	{
		cout << "Enter Input " << i + 1 << ": " << endl;
		cin >> inputs[i];
	}
	cout << "Enter number of final states" << endl;
	cin >> nfinals;
	for (int i = 0; i < nfinals; i++)
	{
		cout << endl << "Enter final state q" << i + 1 << ": ";
		cin >> finals[i];
	}

	cout << "Enter Transisition Rule: " << endl;
	for (int i = 0; i < ninputs; i++) 
	{ 
		for (int j = 0; j < nstates; j++)
		{
			cout << "\n(q" << j << "," << c[i] << ")=q"; cin >> dfa[i][j]; 
		} 
	}
	int i = 0;
	int s = 0, final = 0;
	cout << "\n\nEnterInputString:";
	cin >> mystring[i];

	while (mystring[i] != 0)
	{
		if ((s = check(mystring[i++], s)) < 0)
			break;
		for (i = 0; i < nfinals; i++)
			if (finals[i] == s)
				final = 1;
		if (final == 1)
			cout << "\nValidstring!";
		else
			cout << "\nINVALIDSTRING!";
	}

}
int check(char b, int d)
{
	int j;
	for (j = 0; j < ninputs; j++)
		if (b == c[j])
			return(dfa[d][j]);
	return -1;
}