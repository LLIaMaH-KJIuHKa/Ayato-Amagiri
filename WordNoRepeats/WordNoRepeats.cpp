﻿// WordNoRepeats.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	getline(cin, s);
	int length = 0, max = 0;
	bool b;

	for (int i = 0; i <= s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' ||
			s[i] >= 'а' && s[i] <= 'я' || s[i] >= 'А' && s[i] <= 'Я')
		{
			for (int j = 1; j <= i; j++)
			{
				if (s[i - j])
				{
					if (s[i] != s[i - j])
					{
						b = true;
					}
					else
					{
						b = false;
						break;
					}
				}
				else
				{
					break;
				}
			}
			length++;
		}
		else
		{
			if (b == true && length > max)
			{
				max = length;
			}
			length = 0;
		}
	}

	cout << max;
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
