// TasksFromCF.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include "TasksFromCF.h"

using namespace std;

int main()
{
	/*int a;
	ifstream input("input.txt");
	input >> a;

	ofstream output("output.txt");
	output << a;*/

	StonesOnTheTable();
}

void StonesOnTheTable()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int positions = 0;

	if (s[positions] != s[positions + 1])
	{
		cout << positions;
	}
	else
	{
		do
		{
			positions++;
		} while (s[positions] == s[positions + 1]);
		cout << positions;
	}
}

void BearAndElderBrother()
{
	int a, b;
	cin >> a >> b;
	int years = 0;

	while (true)
	{
		if (a > b)
		{
			cout << years;
			break;
		}
		else
		{
			years++;
			a *= 3;
			b *= 2;
		}
	}
}

void Team()
{
	int n;
	cin >> n;
	int tasksCount = 0;

	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b + c >= 2)
		{
			tasksCount++;
		}
	}

	cout << tasksCount;
}

void BeautifulYear()
{
	int y;
	cin >> y;

	while (true)
	{
		y++;
		int a = y % 10;
		int b = y / 10 % 10;
		int c = y / 100 % 10;
		int d = y / 1000;

		if (a != b && a != c && a != d && b != c && b != d && c != d)
		{
			cout << y;
			break;
		}
	}
}

void Bit()
{
	int n;
	int x = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string function;
		cin >> function;
		if (function == "X++" || function == "++X")
		{
			x++;
		}
		else if (function == "X--" || function == "--X")
		{
			x--;
		}
		else
		{
			cout << "Unknown command" << endl;
			n++;
		}
	}

	cout << x;
}

void Watermelon()
{
	int n;
	cin >> n;

	if (n % 2 == 0 && n / 2 != 1)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}

void TooLongWords()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		int l = s.length();

		if (l > 10)
		{
			cout << s[0] << l - 2 << s[l - 1] << endl;
		}
		else
		{
			cout << s << endl;
		}
	}
}

void SoldierAndBanana()
{
	int k, n, w;
	cin >> k >> n >> w;
	int dollars = 0;

	for (int i = 1; i <= w; i++)
	{
		dollars += i * k;
	}

	cout << max(0, dollars - n);
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
