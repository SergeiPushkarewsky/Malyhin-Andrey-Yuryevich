#include <iostream>//cin, cout, endl
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
bool isPrime(int number, int d) {
	if (number <= 3) return false;
	if (d * d <= number) {
		if (number % d == 0) return false;
		isPrime(number, d + 1);
	}
	else return true;
}
int main() {
	int number;
	setlocale(LC_ALL, "Rus");
	cout << "������� �����: ";
	cin >> number;
	if (isPrime(number, 2)) {
		cout << "����� �������!\n";
	}
	else cout << "����� �� �������!\n";
	system("pause");
	return 0;
}
