// CL5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	/*int n = 1;
	for (int i = 1; i <= 10; i++)
	{
		cout << n << " ";
		n += 2;
	}*/


	/*int n;
	cin >> n;

	int count = 0;
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			count++;
			i--;
		}

		if (count > 2)
		{
			break;
		}
	}

	if (count == 2)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}*/


	/*for (int x = -10; x <= 10; x++)
	{
		for (int y = -10; y <= 10; y++)
		{
			if (abs(x) + abs(y) == 10)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			cout << " ";
		}
		cout << endl;
	}*/


	/*int n;
	cin >> n;

	for (int i = 2; i < n; i++)
	{
		int count = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}

		if (count == 0)
		{
			cout << i << " ";
		}
	}*/

	/*int a;
	do
	{
		cout << "Enter number that bigger than 25: " << endl;
		cin >> a;
	} while (a <= 25);*/


	/*int count = 0;
	int sum = 0;
	do
	{
		int n;
		cin >> n;
		if (n % 2 == 1)
		{
			count++;
			sum += n;
		}

	} while (count < 10);
	cout << sum;*/

	int n;
	cin >> n;

	do
	{
		int b = n % 10;
		cout << b;
		n /= 10;
	} while (n > 0);
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
