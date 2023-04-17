#include<iostream>
using namespace std;
char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int choice, row, col;
char turn = 'x';
bool draw = false;
void game_board()
{
	cout << "Player 1-[x]      Player 2-[o]" << endl;

	cout << "     |     |     " << endl;
	cout << board[0][0] << "    |  " << board[0][1] << "  |    " << board[0][2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << board[1][0] << "    | " << board[1][1] << "   |  " << board[1][2] << endl;
	cout << " ____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << board[2][0] << "    | " << board[2][1] << "   |  " << board[2][2] << endl;
	cout << "     |     |   " << endl;
}
void game_turn()
{
	if (turn == 'x')
	{
		cout << " player 1 [x] turn: ";                                   //player turns 
	}
	else if (turn == 'o')
	{
		cout << " player 2 [o] turn";
	}
	cin >> choice;
	switch (choice)
	{
	case 1:
		row = 0;
		col = 0;
		break;
	case 2:
		row = 0;
		col = 1;
		break;
	case 3:
		row = 0;
		col = 2;
		break;
	case 4:
		row = 1;
		col = 0;
		break;
	case 5:
		row = 1;                                                                 //where input in table can be taken
		col = 1;
		break;
	case 6:
		row = 1;
		col = 2;
		break;
	case 7:
		row = 2;
		col = 0;
		break;
	case 8:
		row = 2;
		col = 1;
		break;
	case 9:
		row = 2;
		col = 2;
		break;
	default:
		cout << "wrong move" << endl;

	}
	if (turn == 'x' && board[row][col] != 'x' && board[row][col] != 'o')
	{
		board[row][col] = 'x';
		turn = 'o';
	}
	else if (turn == 'o' && board[row][col] != 'o' && board[row][col] != 'x')                   //box filling 
	{
		board[row][col] = 'o';
		turn = 'x';
	}
	else
	{
		cout<<"the box is filled try another one"<<endl;
		game_turn();
	}
	game_board();
}
bool game_conditions()
{
	for (int i = 0; i < 3; i++)
	{
		if ((board[i][0] == board[i][1] && board[i][0] == board[i][2]) || (board[0][i] == board[1][i] && board[0][i] == board[2][i])) //row and column check
		{
			return false;
		}
	}
	if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) || (board[0][2] == board[1][1] && board[0][2] == board[2][0])) //diagonal check
	{
		return false;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] != 'x' && board[i][j] != 'o')                           //game continual
			{
				return true;
			}
		}

		draw = true;
		return false;                     //in case of a draw
	}
}
int main()
{
	cout << " TICK TAC TOE " << endl;
	while (game_conditions())
	{
		game_board();
		game_turn();
		game_conditions();
	}
	if (turn == 'x' && draw == false)
	{
		cout << " player 2 is the winner" << endl;
	}
	else if (turn == 'o' && draw == false)
	{
		cout << " player 1 is the winner" << endl;
	}
	else
	{
		cout << " its a draw" << endl;
	}
	return 0;
}

