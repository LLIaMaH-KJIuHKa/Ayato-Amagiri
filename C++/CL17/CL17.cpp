// CL17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

void Formation1()
{
	string s = "Julis is a princess of Lieseltania, a small country in Europe and is a student at Seidoukan Academy. Her full name is Julis-Alexia Marie Florentia Renate van Riessfeld.";
	cout << s << endl;
	int n, left = 0;
	cin >> n;
	for (int i = 1; i < s.length(); i++)
	{
		if (i % n == 0)
		{
			cout << s.substr(i - n, n) << endl;
			left = i;
		}
	}
	cout << s.substr(left, s.length() - left);
}

void Formation2()
{
	string s = "Julis is a princess of Lieseltania, a small country in Europe and is a student at Seidoukan Academy. Her full name is Julis-Alexia Marie Florentia Renate van Riessfeld.";
	cout << s << endl;
	int lastCut = 0, n, left = 0;
	cin >> n;

	for (int i = 1; i < s.length(); i++)
	{
		if (i % n == 0)
		{
			int count = 0;
			string a = s.substr(i - n - lastCut, n);
			for (int j = a.find_last_of(' '); j <= a.length(); j++)
			{
				count++;
				a.pop_back();
			}
			a.insert(a.find_first_of(' '), count, ' ');
			lastCut += count;
			left = i;
			cout << a << endl;
		}
	}
	cout << s.substr(left - lastCut, s.length() - left + lastCut);
}

int main()
{
	Formation2();
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
