#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    string s = "abbabba";
    int len = s.length();
    if (s[0] == 'a' && s[len - 1] == 'a')
    {

        cout << "Accepted";
    }
    else 
    {
        cout << "Not Accepted";
    }

    return 0;

}
