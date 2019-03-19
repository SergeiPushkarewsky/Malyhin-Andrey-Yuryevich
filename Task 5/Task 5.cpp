#include <iostream>//cin, cout, endl
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
void doIt(int **matrix, int **outp, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		outp[i] = new int[cols / 2];
	}
	int j_ = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (j % 2 == 1) {
				outp[i][j_] = matrix[i][j];
				j_++;
				if (j_ == cols / 2) j_ = 0;
			}
		}
	}
}
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Введите размеры матрицы: ";
	int rows, cols;
	cin >> rows >> cols;
	int **matrix = new int*[rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new int[cols];
	}
	cout << "Исходная матрица: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % 100 + 1;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	int **outp = new int*[rows];
	doIt(matrix, outp, rows, cols);
	cout << "Выходная матрица: \n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols / 2; j++) {
			cout << outp[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++) {
		delete matrix[i];
		delete outp[i];
	}
	delete[]matrix;
	delete[]outp;
	system("pause");
	return 0;
}
