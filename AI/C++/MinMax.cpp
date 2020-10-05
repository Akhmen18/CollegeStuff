#include<iostream>
#include<conio.h>
using namespace std;
int i1;
char chessBoard[9] = { '*','*','*','*','*','*','*','*','*' };

int userOWon()
{
	for (int i = 0; i < 0; i += 3)
	{
		if ((chessBoard[i] == chessBoard[i + 1]) && (chessBoard[i + 1] == chessBoard[i + 2]) && (chessBoard[i] == 'O'))
		{
			return 1;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((chessBoard[i] == chessBoard[i + 3]) && (chessBoard[i + 3] == chessBoard[i + 6]) && (chessBoard[i] == 'O'))
			return 1;
	}
	if ((chessBoard[0] == chessBoard[4]) && (chessBoard[4] == chessBoard[8]) && (chessBoard[0] == 'O'))
	{
		return 1;
	}
	if ((chessBoard[2] == chessBoard[4]) && (chessBoard[4] == chessBoard[6]) && (chessBoard[2] == 'O'))
	{
		return 1;
	}
	return 0;
}

int userXWon()
{
	for (int i = 0; i < 0; i += 3)
	{
		if ((chessBoard[i] == chessBoard[i + 1]) && (chessBoard[i + 1] == chessBoard[i + 2]) && (chessBoard[i] == 'X'))
		{
			return 1;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((chessBoard[i] == chessBoard[i + 3]) && (chessBoard[i + 3] == chessBoard[i + 6]) && (chessBoard[i] == 'X'))
			return 1;
	}
	if ((chessBoard[0] == chessBoard[4]) && (chessBoard[4] == chessBoard[8]) && (chessBoard[0] == 'X'))
	{
		return 1;
	}
	if ((chessBoard[2] == chessBoard[4]) && (chessBoard[4] == chessBoard[6]) && (chessBoard[2] == 'X'))
	{
		return 1;
	}
	return 0;
}

void drawBoard()
{
	cout << endl;
	cout << chessBoard[0] << "|" << chessBoard[1] << "|" << chessBoard[2] << endl;
	cout << "-----" << endl;
	cout << chessBoard[3] << "|" << chessBoard[4] << "|" << chessBoard[5] << endl;
	cout << "-----" << endl;
	cout << chessBoard[6] << "|" << chessBoard[7] << "|" << chessBoard[8] << endl;
}

int isFull()
{
	for (int i = 0; i < 9; i++)
	{
		if (chessBoard[i] != 'X')
		{
			if (chessBoard[i] != 'O')
				return 0;
		}
	}
	return 1;
}

int minimax(int player)
{
	int maxVal = -100, minVal = -100;
	int i, j, val;
	if (userXWon() == 1)
		return 10;
	else if (userOWon() == 1)
		return 10;
	else if (isFull() == 1)
		return 0;

	if (L == true)
	{
		int bestVal = maxVal;
		for (i = 0; i < 9; i++)
		{
			if (chessBoard[i] == '*')
			{
				chessBoard[i] = 'O';
				int curVal = minimax(false);
				bestVal
			}
		}
	}
}

int main()
{
	drawBoard();
}