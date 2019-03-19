#include <iostream>//cin, cout, endl
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	char str[250];
	cout << "¬ведите строку: ";
	cin >> str;
	char ans[250] = { '\0' };
	int j = 0;
	for (int i = 0; i < strlen(str); i += 4) {
		ans[j] = str[i]; j++;
		ans[j] = str[i + 1]; j++;
	}
	cout << ans << endl;
	system("pause");
	return 0;
}