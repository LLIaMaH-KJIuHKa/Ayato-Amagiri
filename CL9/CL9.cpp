// CL9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <string>
#include <Windows.h>
#include "CL9.h"

using namespace std;

int main()
{
	Task4();
}
void Task4()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	getline(cin, s);
	int point = s.find(".");
	int space = s.find(" ");
	cout << s.substr(0, space);
	for (int i = 0; i < s.find_first_of(" "); i++)
	{
		cout << s.substr(point, space);
	}
}
void Task3()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	getline(cin, s);
	int space = s.find_first_of(" ");

	cout << s.substr(0, space);
	cout << " " << s[space + 1] << ".";
	cout << " " << s[s.find_last_of(" ") + 1] << ".";
}


void Task2()
{
	int m, d, days;
	cin >> m >> d;

	switch (m)
	{
	case 2:
		days = 28;
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31; ;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;

	}

	cout << ceil((days + d - 1) / 7.0);
}

void Task1()
{
	int n;
	cin >> n;

	switch (n)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "Weekday";
		break;
	case 6:
	case 7:
		cout << "Weekend";
		break;
	default:
		cout << "?";
		break;
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
