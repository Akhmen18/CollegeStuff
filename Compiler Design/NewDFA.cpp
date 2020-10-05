#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <iostream>
using namespace std;
void main()
{

    int i = 0, f = 0, s = 0;
    char arr[80];

    cout<<"Enter any input string terminated by ";
    cin >> arr;

    while (arr[i] != '$' && f == 0)
    {
        switch (s)
        {
        case 0:
            if (arr[i] >= '0' && arr[i] <= '9')
            {
                s = 1;
                i++;
            }
            else

                f = 1;
            break;

        case 1:
            if (arr[i] >= '0' && arr[i] <= '9')
                i++;
            else if(arr[i] == '.')
            {
                s = 2;
                i++;
            }
            else
                f = 1;
            break;

        case 2:
            if (arr[i] >= '0' && arr[i] <= '9')
            {
                s = 3;
                i++;
            }
            else
                f = 1;
            break;
        case 3:
            if (arr[i] >= '0' && arr[i] <= '9')
                i++;
            else if(arr[i] == 'E' || 'e')
            {
                s = 4;
                i++;
            }
            else
                f = 1;
            break;
        case 4:
            if (arr[i] == '+' || arr[i] == '-')
            {
                s = 5;
                i++;
            }
            else
                f = 1;
            break;

        case 5: if (arr[i] >= '0' && arr[i] <= '9')
            i++;
              else
            f = 1;
            break;

        }

    }
    if (f == 1)
        cout << "\nInvalid String !";
    else
        cout << "String is Valid ";
}