// Olimp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
//#include "Olimp.h"

using namespace std;


int main()
{
	ifstream input("input.txt");
	string s;
	getline(input, s);
	int count = 1;
	for (int i = 0; i <= s.length(); i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
		{
			count++;
		}
	}


	ofstream output("output.txt");
	output << count;
}

int fibonacci(int number)
{
	if (number == 0)
		return 0;
	if (number == 1)
		return 1;
	return fibonacci(number - 1) + fibonacci(number - 2);
}
int Task4()
{
	ifstream input("input.txt");
	int n;
	input >> n;

	ofstream output("output.txt");
	output << fibonacci(n);

	return 0;
}


void Task9()
{
	ifstream input("input.txt");
	string s;
	getline(input, s);
	int count = 1;
	for (int i = 0; i <= s.length(); i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
		{
			count++;
		}
	}


	ofstream output("output.txt");
	output << count;
}

void Task8()
{
	ifstream input("input.txt");
	int n, p, m;
	input >> n >> p >> m;
	int count = 0;
	while (n <= m)
	{
		n = n * (100 + p) / 100;
		count++;
	}


	ofstream output("output.txt");
	output << count;
}

int Task5()
{
	ifstream input("input.txt");
	int a, b;
	input >> a >> b;


	ofstream output("output.txt");
	output << ((a % 2 || b % 2) ? 1 : 2);
	return 0;
}

void Task7()
{
	ifstream input("input.txt");
	int n, h = 9;
	input >> n;
	int minutes = n * 45;
	for (int i = 1; i < n; i++)
	{
		switch (i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			if (minutes >= 60)
			{
				minutes -= 60;
				h++;
			}
			minutes += 5;
			break;
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
			if (minutes >= 60)
			{
				minutes -= 60;
				h++;
			}
			minutes += 15;
			break;
		}

	}


	ofstream output("output.txt");
	output << h << " " << minutes;
}

void Task3()
{
		int sec, h, m, s;
		ifstream in("input.txt");
		in >> sec;
		in.close();

		h = sec / (60 * 60) % 24;
		m = sec / 60 % 60;
		s = sec % 60;

		ofstream out;
		out.open("output.txt");
		out.width(2);
		out.fill('0');
		out << h << ":";
		out.width(2);
		out.fill('0');
		out << m << ":";
		out.width(2);
		out.fill('0');
		out << s;
		out.close();
}

void Task2()
{
	ifstream input("input.txt");
	int n;
	input >> n;
	int a = n % 10;
	int b = n / 10 % 10;
	int c = n / 100;


	ofstream output("output.txt");
	output << c << a << b;
}

void Task1()
{
	ifstream input("input.txt");
	int n, k, count;
	input >> n >> k;
	count = n % k;


	ofstream output("output.txt");
	output << count;
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
