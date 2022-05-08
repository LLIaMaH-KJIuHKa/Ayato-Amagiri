// Matches.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Matches.h"

using namespace std;

int main()
{
	srand(time(NULL));
	int matchesCount = 20;
	int currentPlayer = 1;

	while (matchesCount > 0)
	{
		currentPlayer = ChangeCurrentPlayer(currentPlayer);

		DrawMatches(matchesCount);

		int move = PlayerMove(currentPlayer, matchesCount);

		matchesCount -= move;
	}
	if (currentPlayer == 1)
	{
		cout << "Computer won";
	}
	else
	{
		cout << "Human won";
	}
}

int ChangeCurrentPlayer(int currentPlayer)
{
	if (currentPlayer == 1)
	{
		return 2;
	}
	else
	{
		return 1;
	}
}

int PlayerMove(int currentPlayer, int matchesCount)
{
	int move;
	while (true)
	{
		if (currentPlayer == 1)
		{
			cout << "Computer's move: " << endl;
			if (matchesCount % 5 == 0)
			{
				move = 1;
			}
			else if (matchesCount == 6)
			{
				move = 2;
			}
			else if (matchesCount == 7)
			{
				move = 3;
			}
			else if (matchesCount == 3)
			{
				move = 3;
			}
			else if (matchesCount == 2)
			{
				move = 2;
			}
			else if (matchesCount == 1)
			{
				move = 1; 
			}
			else
			{
				move = rand() % (3 - 1) + 1;
			}
			cout << move << endl;
			break;
		}
		else
		{
			cout << "Human. Do your move: " << endl;
			cin >> move;

			if (move >= 1 && move <= 3 && move <= matchesCount)
			{
				break;
			}

			cout << "Invalid move" << endl;
		}
	}
	return move;
}

void DrawMatches(int matchesCount)
{
	for (int i = 1; i <= matchesCount; i++)
	{
		cout << "|";
	}
	cout << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
