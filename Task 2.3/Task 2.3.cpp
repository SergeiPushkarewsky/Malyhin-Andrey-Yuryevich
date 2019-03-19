#include <iostream>//cin, cout, endl
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, x, y;
	cout << "Введите первое число:";
	cin >> x;
	cout << "Введите первое число:";
	cin >> y;
	cout << "Выберите операцию 1.+,2.-,3.*,4./,5.%." << ' ' << ":" << ' ';
	cin >> a;

	a == 1 ? cout << x + y :
		a == 2 ? cout << x - y :
		a == 3 ? cout << x * y :
		a == 4 && y != 0 ? cout << (double)x / y :
		a == 5 && y != 0 ? cout << x % y :
		cout << "error";
	system("pause");
}