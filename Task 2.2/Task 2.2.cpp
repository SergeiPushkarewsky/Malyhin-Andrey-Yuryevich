#include <iostream>//cin, cout, endl
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int a, x, y;
	cout << "������� ������ �����:";
	cin >> x;
	cout << "������� ������ �����:";
	cin >> y;
	cout << "�������� �������� 1.+,2.-,3.*,4./,5.%." << ' ' << ":" << ' ';
	cin >> a;
	switch (a)//��������
	{
	case 1://�������
		cout << x + y << ' ';//��������
		break;//��������� ���������  ���������� ��������� ��������� ��� �����,� ����� �������� ���������� ���������� ��������� ���� ����� ����
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
		else { cout << "error, to zero cannot be split"; }//������, �� 0 ������ ������
		break;
	case 5:
		if (y != 0) {
			cout << x % y << ' ';
		}
		else { cout << "error, to zero cannot be split"; }

		break;
	default://����������(������ ������)
		cout << "you have entered wrong action";//�� ����� �� ������ ��������
	}
	system("pause");
}