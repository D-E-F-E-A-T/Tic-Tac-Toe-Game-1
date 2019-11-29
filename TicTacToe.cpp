#include <iostream>

using namespace std;

char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int n;
void gameform();
void Input();
void change_player();
char Win();


int main()
{
	n = 0;
	gameform();
	while (1)
	{
		n++;
		Input();
		gameform();
		Win();
		if (Win() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (Win() == 'O')
		{
			cout << "O wins!" << endl;
			break;
		}
		else if (Win() == '/' && n == 9)
		{
			cout << "It's a draw!" << endl;
			break;
		}
		change_player();
	}

	system("pause");
	return 0;
}

void gameform()
{
	system("cls");
	cout << "Tic Tac Toe Game By KickItLikeShika V1.0" << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << " " << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void Input()
{
	string a;
	cout << "It's " << player << " turn. " << "Press the number of the field: ";
	cin >> a;

	if (a == "1")
	{
		if (matrix[0][0] == '1')
			matrix[0][0] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == "2")
	{
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == "3")
	{
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == "4")
	{
		if (matrix[1][0] == '4')
			matrix[1][0] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == "5")
	{
		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == "6")
	{
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == "7")
	{
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == "8")
	{
		if (matrix[2][1] == '8')
			matrix[2][1] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == "9")
	{
		if (matrix[2][2] == '9')
			matrix[2][2] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else
	{
		cout << "Please enter numbers from 1-9." << endl;
		Input();
	}
}

void change_player()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
char Win()
{
	// First player
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	// Second player
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	return '/';
}
