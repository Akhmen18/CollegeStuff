#include<iostream>
using namespace std;
class Jug {
	int J1 = 4;
	int J2 = 3;
	int x = 0;
	int y = 0;

public:
	void showRules()
	{
		cout << "Rules:" << endl;
		cout << "1. Fill Jug 1 with full Capacity" << endl;
		cout << "2. Fill Jug 2 with full Capacity" << endl;
		cout << "3. Empty Jug 1" << endl;
		cout << "4. Empty Jug 2" << endl;
		cout << "5. Fill Jug 1 with contents of Jug 2" << endl;
		cout << "6. Fill Jug 2 with contents of Jug 1" << endl;
		cout << "7. Pour water from Jug 2 to fill Jug 1" << endl;
		cout << "8. Pour water from Jug 1 to fill Jug 2" << endl;
		cout << endl << endl;
	}
	void run()
	{
		showRules();
		int count = 0;
		while (x != 2)
		{
			int input;
			cout << "Enter Rule:" << endl;
			cin >> input;
			if (input == 1)
			{
				x = J1;
				count++;
			}
			else if (input == 2)
			{
				y = J2;
				count++;
			}
			else if (input == 3)
			{
				x = 0;
				count++;
			}
			else if (input == 4)
			{
				y = 0;
				count++;
			}
			else if (input == 5)
			{
				if ((x + y) > J1)
				{
					cout << "Cannot pour to this as Jug 1 is already full";
					break;
				}
				else
				{
					x = y;
					y = 0;
					count++;
				}
			}
			else if (input == 6)
			{
				if ((x + y) > J2)
				{
					cout << "Cannot pour to this as Jug 2 is already full";
					break;
				}
				else
				{
					y = x;
					x = 0;
					count++;
				}
			}
			else if (input == 7)
			{
				if ((x + y) < (J1 + J2))
				{
					y = y - (J1 - x);
					x = J1;
					count++;
				}
				else
				{
					cout << "wasted move";
					break;
				}
			}
			else if (input == 8)
			{
				if ((x + y) < (J1 + J2))
				{
					x = x - (J2 - y);
					y = J2;
					count++;
				}
				else
				{
					cout << "wasted move";
					break;
				}
			}
			else
			{
				cout << "Invalid input, Here are the rules possible" << endl;
				showRules();
			}
		}
		cout << "Water in Jug 1 is: " << x << "L" << endl;
		cout << "The number of steps taken was " << count << endl;
	}
	
};
int main()
{
	Jug juggy;
	juggy.run();
}