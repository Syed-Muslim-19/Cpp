#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void display(char arr[3][3]);
int checkWin(char arr[3][3]);
bool checkTie(char arr[3][3]);
void player1(char arr[3][3]);
void player2(char arr[3][3]);
void cpu(char arr[3][3], int toss);
void clear_board(char arr[3][3]);
int main()
{
	srand(time(0));
	bool tie;
	char arr[3][3];
	bool flag = true;
	int num;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = ' ';
		}
	}
	int menu = 2;
	bool playAgain = false;
	int choice;
	while (true && menu == 2)
	{
		bool  winner = false;
		if (playAgain == false)
		{
			choice;
			cout << endl << "                             Tic Tac Toe Game" << endl;
			cout << "                         1.Human Player VS Computer" << endl;
			cout << "                         2.Human Player VS Human Player" << endl;
			cin >> choice;
			cout << endl;
			display(arr);
		}
		while (choice != 1 && choice != 2)
		{
			cout << "                         Opps wrong entry please.Enter again. " << endl;
			cout << endl << "                             Tic Tac Toe Game" << endl;
			cout << "                         1.Human Player VS Computer" << endl;
			cout << "                         2.Human Player VS Human Player" << endl;
			cin >> choice;
			cout << endl;
		}
		int toss;
		cout << "Result of Toss generated by program" << endl;
		srand(time(0));
		toss = rand() % 2;
		while (true && choice == 1)
		{
			if (toss == 1)
			{
				cout << "CPU's Turn" << endl;
				cpu(arr, toss);
				system("cls");
				display(arr);
				num = checkWin(arr);
				if (num == 1)
				{
					cout << "congratulation!!Player 1 Won" << endl;
					clear_board(arr);
					break;
				}
				else if (num == 2)
				{
					cout << "oops!!CPU has won" << endl;
					clear_board(arr);
					break;
				}
				tie = checkTie(arr);
				if (tie == true)
				{
					cout << "The Game Has Tied" << endl;
					clear_board(arr);
					break;
				}
				cout << "player You lose the toss and play" << endl;
				cout << " player Your Turn" << endl;
				player1(arr);
				system("cls");
				display(arr);
				num = checkWin(arr);
				if (num == 1)
				{
					cout << "congratulation!!Player 1 Won" << endl;
					clear_board(arr);
					break;
				}
				else if (num == 2)
				{
					cout << "oops!!CPU has won" << endl;
					clear_board(arr);
					break;
				}
				tie = checkTie(arr);
				if (tie == true)
				{
					cout << "The Game Has Tied" << endl;
					clear_board(arr);
					break;
				}
			}
			else
			{
				cout << "player You won the toss and play" << endl;
				cout << "player Your Turn" << endl;
				player1(arr);
				system("cls");
				display(arr);
				num = checkWin(arr);
				if (num == 1)
				{
					cout << "congratulation!!Player 1 Won" << endl;
					clear_board(arr);
					break;
				}
				else if (num == 2)
				{
					cout << "oops!!CPU has won" << endl;
					clear_board(arr);
					break;
				}
				tie = checkTie(arr);
				if (tie == true)
				{
					cout << "The Game Has Tied" << endl;
					clear_board(arr);
					break;
				}
				cout << "CPU's Turn" << endl;
				cpu(arr, toss);
				system("cls");
				display(arr);
				num = checkWin(arr);
				if (num == 1)
				{
					cout << "congratulation!!Player 1 Won" << endl;
					clear_board(arr);
					break;
				}
				else if (num == 2)
				{
					cout << "oops!!CPU has won" << endl;
					clear_board(arr);
					break;
				}
				tie = checkTie(arr);
				if (tie == true)
				{
					cout << "The Game Has Tied" << endl;
					clear_board(arr);
					break;
				}
			}
		}
		while (true && choice == 2)
		{
			int toss;
			srand(time(0));
			toss = rand() % 2;
			bool winner = false;
			if (toss == 0)
				cout << "Player 1 has won the toss." << endl;
			else
				cout << "Player 2 has won the toss." << endl;
			while (!winner)
			{
				if (toss == 0)
				{
					player1(arr);
					system("cls");
					display(arr);
					num = checkWin(arr);
					if (num == 2)
					{
						cout << "congratulation!!Player 2 has won." << endl;
						clear_board(arr);
						winner = true;
						break;
					}
					else if (num == 1)
					{
						cout << "congratulation!!Player 1 has won." << endl;
						clear_board(arr);
						winner = true;
						break;
					}
					tie = checkTie(arr);
					if (tie == true)
					{
						cout << "Tie has occured." << endl;
						clear_board(arr);
						winner = true;
						break;
					}
					cout << "Player 2's turn." << endl;
					toss = 1;
				}
				else
				{
					player2(arr);
					system("cls");
					display(arr);
					num = checkWin(arr);
					if (num == 2)
					{
						cout << "congratulation!!Player 2 has won." << endl;
						clear_board(arr);
						winner = true;
						break;
					}
					else if (num == 1)
					{
						cout << "congratulation!!Player 1 has won." << endl;
						clear_board(arr);
						winner = true;
						break;
					}
					tie = checkTie(arr);
					if (tie == true)
					{
						cout << "Tie has occured." << endl;
						clear_board(arr);
						winner = true;
						break;
					}
					cout << "Player 1's turn." << endl;
					toss = 0;
				}
			}
		}
		int menu;
		cout << "Enter 1 to play again" << endl;
		cout << "enter 2 to go to home" << endl;
		cout << "Enter 3 to quit." << endl;
		cin >> menu;
		cout << endl;
		system("cls");
		while (menu != 1 && menu != 2 && menu != 3)
		{
			cout << "Enter again. " << endl;
			cout << "Enter 1 to play again" << endl;
			cout << "enter 2 to go to home" << endl;
			cout << "Enter 3 to quit." << endl;
			cin >> menu;
			cout << endl;
		}
		if (menu == 3)
			break;
		else
			if (menu == 1)
				playAgain = true;
	}
	system("pause");
	return 0;
}
void display(char arr[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		int j = 0;
		cout << "            |      |   " << endl;
		cout << "         ";
		cout << arr[i][j];
		cout << "  |  ";
		cout << arr[i][j + 1];
		cout << "   |   ";
		cout << arr[i][j + 2] << endl;
		cout << "            |      |   " << endl;
		if (i != 2)
			cout << "     _______ ______ _______" << endl;
	}
}
void cpu(char arr[3][3], int toss)
{
	int turn = 0;
	turn++;
	if (turn == 1 && arr[1][1] != 'X' && arr[1][1] != 'O')
	{
		bool flag = true;
		arr[1][1] = 'O';
	}
	else {
		bool flag = true;
		int row1, col1;
		row1 = rand() % 3;
		col1 = rand() % 3;
		while (flag == true)
		{
			if (arr[row1][col1] != ' ')
			{
				flag = true;
			}
			else
				flag = false;

			if (flag == true)
			{
				row1 = rand() % 3;
				col1 = rand() % 3;
			}
		}
		arr[row1][col1] = 'O';
	}
}

void player1(char arr[3][3])
{
	bool flag = true;
	int row1, col1;
	cout << "Player 1 Enter row 'X': ";
	cin >> row1;
	cout << endl;
	cout << "Player 1 Enter column 'X': ";
	cin >> col1;
	cout << endl;
	while (flag == true)
	{
		if (arr[row1 - 1][col1 - 1] != ' ')
		{
			flag = true;
		}
		else
			flag = false;
		if (flag == true || row1 < 1 || row1 > 3 || col1 < 1 || col1 > 3)
		{
			cout << "Slot not available please Enter again " << endl;
			cout << "Player 1 Enter row 'X': ";
			cin >> row1;
			cout << endl;
			cout << "Player 1 Enter column 'X': ";
			cin >> col1;
			cout << endl;
			flag = true;
		}
	}
	arr[row1 - 1][col1 - 1] = 'X';
}
void player2(char arr[3][3])
{
	bool flag = true;
	int row1, col1;
	cout << "Player 2 Enter row 'O': ";
	cin >> row1;
	cout << endl;
	cout << "Player 2 Enter column 'O': ";
	cin >> col1;
	cout << endl;
	while (flag == true)
	{
		if (arr[row1 - 1][col1 - 1] != ' ')
		{
			flag = true;
		}
		else
			flag = false;
		if (flag == true || row1 < 1 || row1 > 3 || col1 < 1 || col1 > 3)
		{
			cout << "Slot not available please Enter again " << endl;
			cout << "Player 1 Enter row 'O': ";
			cin >> row1;
			cout << endl;
			cout << "Player 1 Enter column 'O': ";
			cin >> col1;
			cout << endl;
			flag = true;
		}
	}
	arr[row1 - 1][col1 - 1] = 'O';
}
bool checkTie(char arr[3][3])
{
	bool check = true;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == ' ')
				check = false;
		}
	}
	return check;
}
int checkWin(char arr[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		int j = 0;
		if ((arr[i][j] != ' ' && arr[i][j + 1] != ' ' && arr[i][j + 2] != ' ') || (arr[j][i] != ' ' && arr[j + 1][i] != ' ' && arr[j + 2][i] != ' '))
		{
			if ((arr[i][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i][j + 2]) || (arr[j][i] == arr[j + 1][i] && arr[j + 1][i] == arr[j + 2][i]))
			{
				if (arr[i][j] == 'X')
				{
					return 1;
				}

				else
				{
					return 2;
				}
			}
		}
	}
	if (((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) || (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])) && arr[1][1] == 'X')
		return 1;
	else
		if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] || (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])) && arr[1][1] == 'O')
			return 2;
	return 0;
}
void clear_board(char arr[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = ' ';
		}
	}
}