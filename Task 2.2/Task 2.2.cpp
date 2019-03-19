#include <iostream>//cin, cout, endl
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int a, x, y;
	cout << "Введите первое число:";
	cin >> x;
	cout << "Введите первое число:";
	cin >> y;
	cout << "Выберите операцию 1.+,2.-,3.*,4./,5.%." << ' ' << ":" << ' ';
	cin >> a;
	switch (a)//оператор
	{
	case 1://условие
		cout << x + y << ' ';//действие
		break;//завершает выполение  ближайшего условного оператора или цикла,а также передает управление следующему оператору если такой есть
	case 2:
		cout << x - y << ' ';
		break;
	case 3:
		cout << x * y << ' ';
		break;
	case 4:
		if (y != 0) {
			cout << (double)x / y << ' ';
		}
		else { cout << "error, to zero cannot be split"; }//ошибка, на 0 делить нельзя
		break;
	case 5:
		if (y != 0) {
			cout << x % y << ' ';
		}
		else { cout << "error, to zero cannot be split"; }

		break;
	default://исключение(выдает ошибку)
		cout << "you have entered wrong action";//вы ввели не верное действие
	}
	system("pause");
}