#include <iostream>//cin, cout, endl
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "¬ведите n: ";
	cin >> n;
	double eps = 0.000001;
	double e = 0;
	double u = 1;
	double f = 1;
	double i = 2;
	while (fabs(u) > eps) {
		e += u;
		u = 1 / f;
		f *= i;
		i++;
	}
	cout << setprecision(10) << e << endl;
	system("pause");
	return 0;
}