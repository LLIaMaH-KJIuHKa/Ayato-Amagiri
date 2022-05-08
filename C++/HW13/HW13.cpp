// HW13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <string>
#include "HW13.h"

using namespace std;

int main()
{

}

void TwoBrackets()
{
	int t;
	cin >> t;
	cout << endl;
	for (int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		int result = 0;
		if (s.find_first_of('(') < s.find_first_of(')'))
		{
			result++;
			s.erase(s.find_first_of('('));
			s.erase(s.find_first_of(')'));
		}
		if (s.find_first_of('[') < s.find_first_of(']'))
		{
			result++;
			s.erase(s.find_first_of('['));
			s.erase(s.find_first_of(']'));
		}
		cout << result << endl;
		if (s.size() == 1)
		{
			break;
		}
	}
}

void DimaAndSergey()
{
	vector<int> cards;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int card;
		cin >> card;
		cards.push_back(card);
	}

	int sergey = 0;
	int dima = 0;
	bool player = true;
	while (n >= 0)
	{
		int currentMax = 0;
		for (int i = 0; i < n; i++)
		{
			if (cards[i] > currentMax && i == 0 || cards[i] > currentMax && i == n - 1)
			{
				currentMax = cards[i];
			}
		}


		for (int i = 0; i < n; i++)
		{
			if (cards[i] == currentMax)
			{
				if (player)
				{
					sergey += currentMax;
				}
				else
				{
					dima += currentMax;
				}
				currentMax = 0;
				cards.erase(cards.begin() + i);
				break;
			}
		}
		n--;
		if (player)
		{
			player = false;
			continue;
		}
		else
		{
			player = true;
			continue;
		}
	}
	cout << sergey << " " << dima;
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
