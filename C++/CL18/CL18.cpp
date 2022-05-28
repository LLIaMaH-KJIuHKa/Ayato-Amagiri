// CL18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "CL18.h"

using namespace std;

int main()
{
	RemovingOfDublicates();
}

void RemovingOfDublicates()
{
	int n;
	cin >> n;
	vector<int> numbers, originals;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		numbers.push_back(a);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (numbers[i] == numbers[j])
			{
				numbers[i] = NULL;
				break;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (numbers[i] != NULL)
		{
			originals.push_back(numbers[i]);
		}
	}

	cout << originals.size() << endl;
	for (int i = 0; i < originals.size(); i++)
	{
		cout << originals[i] << " ";
	}
}

void Reconnaissance2()
{
	int n, difference = 0, s1 = 0, s2 = 0;
	cin >> n;
	vector<int> soldiers;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		soldiers.push_back(a);
		if (a > difference)
		{
			difference = a;
		}
	}

	for (int i = 1; i < n; i++)
	{
		if (abs(soldiers[i] - soldiers[i - 1]) < difference)
		{
			difference = abs(soldiers[i] - soldiers[i - 1]);
			s1 = i + 1;
			s2 = i;
		}
	}

	if (abs(soldiers[n - 1] - soldiers[0]) < difference)
	{
		difference = abs(soldiers[n - 1] - soldiers[0]);
		s1 = n;
		s2 = 1;
	}

	cout << s1 << " " << s2;
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
