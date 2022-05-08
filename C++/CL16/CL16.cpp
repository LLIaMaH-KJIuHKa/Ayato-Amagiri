// CL16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include "CL16.h"

using namespace std;

int main()
{
	EvenStrings();
}

void EvenStrings()
{
	int n, count = 0;
	cin >> n;
	string s;
	cin >> s;

	while (s.length() > 0)
	{
		if (s[s.length() - 1] % 2 == 0)
		{
			count += s.length();
		}
		s.erase(s.length() - 1, 1);
	}

	cout << count;
}

void LinearKeyboard()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int minTime = 0;
		string describes, s;
		cin >> describes;
		cin >> s;
		for (int i = 1; i < s.length(); i++)
		{
			int a = describes.find_first_of(s[i]) - describes.find_first_of(s[i - 1]);
			minTime += abs(a);
		}
		cout << minTime << endl;
	}
}

void LoveA()
{
	string s;
	cin >> s;
	int count = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a')
		{
			count++;
		}
	}

	while (s.length() / 2 >= count)
	{
		s.erase(s.find_first_not_of('a'), 1);
	}

	cout << s.length();
}

void MinTillNY()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int h, m, minutes = 0;
		cin >> h >> m;
		while (h != 24)
		{
			if (m == 60)
			{
				m = 0;
				h++;
			}
			m++;
			minutes++;
		}
		cout << minutes - 1 << endl;
	}
}

void VanyaCubes()
{
	int n, cubes = 0;
	cin >> n;
	while (n >= 0)
	{
		cubes++;
		for (int i = 1; i <= cubes; i++)
		{
			n -= i;
		}
	}
	cout << cubes - 1;
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
