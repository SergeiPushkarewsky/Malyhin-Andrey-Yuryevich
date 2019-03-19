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
		cout << "ФИО работника: " << fio << endl;
		cout << "Должность работника: " << speciality << endl;
		cout << "Зарплата работника: " << salary << endl;
		cout << "Год поступления на работу: " << year << endl;
	}
	void fill() {
		cout << "Заполните ФИО работника: ";
		getline(cin, fio);
		cout << "Заполните должность: ";
		getline(cin, speciality);
		cout << "Год поступления на работу: ";
		cin >> year;
		cout << "Зарплата: ";
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
	cout << "Введите ФИО работника, которого Вы хотите удалить из БД: \n";
	string fioToFind;
	getline(cin, fioToFind);
	for (int i = 0; i < id; i++) {
		if (workers[i].fio == fioToFind) {
			cout << "Работник был удален!\n";
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
		cout << "Выберите действие: \n";
		cout << "1. Добавить в БД новую запись\n";
		cout << "2. Удалить запись из БД\n";
		cout << "3. Вывести все записи из БД\n";
		cout << "4. Выход из программы\n";
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
				cout << "База данных пуста!\n";
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