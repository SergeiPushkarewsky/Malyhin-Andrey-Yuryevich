#include <iostream>//cin, cout, endl
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
int calc(int number) {
	if (number > 0) {
		return calc(number / 10) + number % 10;
	}
	else return 0;
}
int main() {
	int number;
	setlocale(LC_ALL, "Rus");
	cout << "Введите число: ";
	cin >> number;
	cout << "Сумма цифр: " << calc(number) << endl;
	system("pause");
	return 0;
}
