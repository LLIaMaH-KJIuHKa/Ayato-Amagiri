// HW11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>
//#include "HW11.h"

using namespace std;

int main()
{
	const int amount = 10;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < amount; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << arr[amount - 1] << " ";
	for (int i = -1; i < amount - 2; i++)
	{
		int n = arr[i + 1];
		cout << n << " ";
	}
}

void AmountOfPalindroms()
{
	ifstream input("input.txt");
	string s, word;
	getline(input, s);
	int first = 0, count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		while (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
		{
			word += s[i];
			i++;
		}

		if (word != "")
		{
			bool isPalindrom = true;
			for (int j = 0; j < s.length() / 2; ++j)
			{
				if (s[j] != s[s.length() - j - 1])
				{
					isPalindrom = false;
					break;
				}
			}

			if (isPalindrom)
			{
				count++;
			}
		}
	}

	ofstream output("output.txt");
	output << count;
}

void ChangeThirdElement()
{
	const int amount = 10;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < amount; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int n;
	cin >> n;
	*(arr + 2) = n;

	for (int i = 0; i < amount; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void ArrayViceVersa()
{
	const int amount = 10;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < amount; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = amount - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
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
