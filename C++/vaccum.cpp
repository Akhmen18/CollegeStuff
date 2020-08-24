#include<iostream>
#include<stdlib.h>
class enviornment
{
public:
	int conditionOfA;
	int conditionOfB;
	enviornment()
	{
		conditionOfA = rand() % (2);
		conditionOfB = rand() % (2);
	}
};
void runVaccumCleaner(enviornment a);
using namespace std;
void main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		enviornment obj;
		runVaccumCleaner(obj);
	}

}

void runVaccumCleaner(enviornment a)
{
	int score = 0;
	int vaccumLocation = rand() % (2);
	std::cout << "VaccumLocation = " << vaccumLocation << endl;
	if (vaccumLocation == 0)
	{
		std::cout << "Vaccum is at Location A" << endl;
		if (a.conditionOfA == 1)
		{
			std::cout << "Location A is dirty" << endl;
			a.conditionOfA = 0;
			score++;
			std::cout << "Location A is Cleaned" << endl << "Moving to Location B" << endl;
			score--;
			if (a.conditionOfB == 1)
			{
				std::cout << "Location B is dirty" << endl;
				a.conditionOfB = 0;
				score++;
			}

		}
		else
		{
			score--;
			if (a.conditionOfB == 1)
			{
				std::cout << "Location B is dirty" << endl;
				a.conditionOfB = 0;
				score++;
				std::cout << "Location B is Cleaned" << endl;
			}

		}
	}
	else if(vaccumLocation == 1)
	{
		std::cout << "Vaccum is at Location B" << endl;
		if (a.conditionOfB == 1)
		{
			std::cout << "Location B is dirty" << endl;
			a.conditionOfB = 0;
			score++;
			std::cout << "Location B is Cleaned" << endl << "Moving to Location A" << endl;
			score--;
			if (a.conditionOfA == 1)
			{
				std::cout << "Location A is dirty" << endl;
				a.conditionOfA = 0;
				score++;
			}

		}
		else
		{
			score--;
			if (a.conditionOfA == 1)
			{
				std::cout << "Location A is dirty" << endl;
				a.conditionOfA = 0;
				score++;
				std::cout << "Location A is Cleaned" << endl;
			}

		}
	}

	std::cout << "Score is: " << score << endl;
	std::cout << endl << endl;
}