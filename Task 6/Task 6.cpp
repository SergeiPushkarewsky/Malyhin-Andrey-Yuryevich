#include <iostream>//cin, cout, endl
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
int id = 0;
int tail = 99;
struct Worker {
	string fio;
	string speciality;
	int year;
	int salary;
	Worker() {
		fio = "";
		speciality = "";
		year = NULL;
		salary = NULL;
	}
	int getYear() {
		return year;
	}
	void display() {
		cout << "��� ���������: " << fio << endl;
		cout << "��������� ���������: " << speciality << endl;
		cout << "�������� ���������: " << salary << endl;
		cout << "��� ����������� �� ������: " << year << endl;
	}
	void fill() {
		cout << "��������� ��� ���������: ";
		getline(cin, fio);
		cout << "��������� ���������: ";
		getline(cin, speciality);
		cout << "��� ����������� �� ������: ";
		cin >> year;
		cout << "��������: ";
		cin >> salary;
		cin.ignore();
	}
	int getSalary() {
		return salary;
	}
	string getSpeciality() {
		return speciality;
	}
} workers[100];
void addWorker() {
	workers[id].fill();
	id++;
}
void eraseWorker() {
	cout << "������� ��� ���������, �������� �� ������ ������� �� ��: \n";
	string fioToFind;
	getline(cin, fioToFind);
	for (int i = 0; i < id; i++) {
		if (workers[i].fio == fioToFind) {
			cout << "�������� ��� ������!\n";
			if (i != id - 1) {
				swap(workers[i], workers[id - 1]);
			}
			else {
				swap(workers[i], workers[tail]);
				tail--;
			}
			id--;
		}
	}
}
void displayWorkers() {
	for (int i = 0; i < id; i++) {
		workers[i].display();
	}
}
int main() {
	setlocale(LC_ALL, "Rus");
	char c;
	do {
		cout << "�������� ��������: \n";
		cout << "1. �������� � �� ����� ������\n";
		cout << "2. ������� ������ �� ��\n";
		cout << "3. ������� ��� ������ �� ��\n";
		cout << "4. ����� �� ���������\n";
		cin >> c;
		switch (c) {
		case '1': {
			cin.ignore();
			addWorker();
			break;
		}
		case '2': {
			cin.ignore();
			eraseWorker();
			break;
		}
		case '3': {
			if (id == 0) {
				cout << "���� ������ �����!\n";
			}
			else
				displayWorkers();
			break;
		}
		}
	} while (c != '4');

	system("pause");
	return 0;
}