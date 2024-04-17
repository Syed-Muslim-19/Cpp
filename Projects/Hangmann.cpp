#include<iostream>
#include <string>
using namespace std;
int checkGuess(char guess, string hideword, string& wordguess)
{
	int i;
	int m = 0;
	int lengths = hideword.length();
	for (i = 0; i < lengths; i++)
	{

		if (guess == wordguess[i])
			return 0;

		if (guess == hideword[i])
		{
			wordguess[i] = guess;
			m++;
		}
	}
	return m;
}
int main()
{
	system("color F0");
	cout << "               -----------|\n               |          o\n               |         /|\\ \n               |         / \\ \n               |              \n               |________________\n" << endl;
	cout << "RULES OF GAME : " << endl;
	cout << "1) User will enter a word to guess and you have to guess the word by letters" << endl;
	cout << "2) You will have 100 points, if you want to undo the move it will reduce your points by -60." << endl;
	cout << "3) 1-correct guess will add +10 points" << endl;
	cout << "4) You only have 6 tries so be careful\n" << endl;
	cout << "\n" << endl;
	string word;
	//write a word to be guess
	cout << "Enter the word to be guess : ";
	cin >> word;
	char alphabet, undo;
	int guess = 6, count = 0, points = 100;
	int num = word.length();
	int i = 0;
	cout << endl;
	while (1)
	{
		cout << endl;
		//this string will higlight the length of the word to be guess
		string hide(word.length(), '?');
		while (guess != 0)
		{
			system("CLS");
			switch (guess)
			{
				//cases are the number of guesses left
			case 6:
			{
				cout << "               -----------|\n               |            \n               |              \n               |              \n               |              \n               |________________" << endl;
				cout << "the total guess left : 6 " << endl;
				cout << endl;
				break;
			}
			case 5:
			{
				cout << "               -----------|\n               |          o\n               |              \n               |              \n               |              \n               |________________" << endl;
				cout << "the total guess left : 5 " << endl;
				cout << endl;
				break;
			}
			case 4:
			{
				cout << "               -----------|\n               |          o\n               |          |   \n               |              \n               |              \n               |________________" << endl;
				cout << "the total guess left : 4 " << endl;
				cout << endl;
				break;
			}
			case 3:
			{
				cout << "               -----------|\n               |          o\n               |          |\\ \n               |              \n               |              \n               |________________" << endl;
				cout << "the total guess left : 3 " << endl;
				cout << endl;
				break;
			}
			case 2:
			{
				cout << "               -----------|\n               |          o\n               |         /|\\ \n               |              \n               |              \n               |________________" << endl;
				cout << "the total guess left : 2 " << endl;
				cout << endl;
				break;
			}
			case 1:
			{
				cout << "               -----------|\n               |          o\n               |         /|\\ \n               |         /    \n               |              \n               |________________" << endl;
				cout << "the total guess left : 1 " << endl;
				cout << endl;
				break;
			}
			default:
				break;
			}
			cout << hide << endl;
			//enter the alphabet to be searched in the word 
			cout << "Guess a letter: ";
			cin >> alphabet;
			if (checkGuess(alphabet, word, hide) == 0)
			{
				//if the alphabet is not found in the word then guess-1
				cout << "Incorrect letter \n" << endl;
				guess = guess - 1;
				cout << "Total Points left : " << points << "\n" << endl;
				cout << "Do You want to Undo (Y or N) : ";
				cin >> undo;
				cout << endl;
				if ((undo == 'Y' || undo == 'y') && points >= 60)
				{
					//if the user undo a move it will -60 the total points
					guess = guess + 1;
					points = points - 60;
					cout << "Move Undo Succesfully \n" << endl;
				}
				else if (undo == 'n' || undo == 'N')
				{
					cout << "User did not undo the move \n" << endl;
				}
				else if (undo == 'Y' || undo == 'y' && 60 >= points)
				{
					cout << "Not enough points \n" << endl;
					cout << endl;
				}
				else
					cout << "Invalid Character entered \n" << endl;
				system("pause");
			}
			//if the alphabet is found in the word
			else
			{
				points += 10;
				cout << "NICE! You guessed a Letter" << endl;
				cout << "Total Points left : " << points << endl;
				cout << endl;
				system("pause");
			}
			system("CLS");
			cout << endl;
			//When the word is guessed it will break the loop else game would not stop
			if (word == hide)
			{
				switch (guess)
				{
				case 6:
				{
					cout << "               -----------|\n               |            \n               |              \n               |              \n               |              \n               |________________" << endl;
					cout << "the total guess left : 6 " << endl;
					cout << endl;
					break;
				}
				case 5:
				{
					cout << "               -----------|\n               |          o\n               |              \n               |              \n               |              \n               |________________" << endl;
					cout << "the total guess left : 5 " << endl;
					cout << endl;
					break;
				}
				case 4:
				{
					cout << "               -----------|\n               |          o\n               |          |   \n               |              \n               |              \n               |________________" << endl;
					cout << "the total guess left : 4 " << endl;
					cout << endl;
					break;
				}
				case 3:
				{
					cout << "               -----------|\n               |          o\n               |          |\\ \n               |              \n               |              \n               |________________" << endl;
					cout << "the total guess left : 3 " << endl;
					cout << endl;
					break;
				}
				case 2:
				{
					cout << "               -----------|\n               |          o\n               |         /|\\ \n               |              \n               |              \n               |________________" << endl;
					cout << "the total guess left : 2 " << endl;
					cout << endl;
					break;
				}
				case 1:
				{
					cout << "               -----------|\n               |          o\n               |         /|\\ \n               |         /    \n               |              \n               |________________" << endl;
					cout << "the total guess left : 1 " << endl;
					cout << endl;
					break;
				}
				default:
					break;
				}
				cout << "The Word to be guessed was : " << word << endl;
				cout << "........!!!!!!!! Congratulations You got it !!!!!!!!........" << endl;
				count++;
				break;
			}
		}
		//if word==hide then count will be one which mean the user guessed the world after which the game will stop
		if (count == 1)
		{
			break;
		}
		if (guess == 0)
		{
			cout << "               -----------|\n               |          o\n               |         /|\\ \n               |         / \\ \n               |              \n               |________________" << endl;
			cout << "The Word to be guessed was : " << word << endl;
			cout << "you loose the game\n" << endl;
			cout << "...........NO you've been hanged.........." << endl;
			break;
		}
	}
	return 0;
}
