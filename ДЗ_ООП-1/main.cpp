﻿#include <iostream>
#include<Windows.h>
#include <iomanip>
#include "Fraction.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int num_one{}, num_two{}, number{};
	cout << "Введите числитель:" << endl;
	cin >> num_one;
	cout << "Введите знаменатель:" << endl;
	cin >> num_two;

	Fraction fraction;
	fraction.input(num_one, num_two);

	do {
		fraction.show();
		cout << "1 - Придавить к дроби число " << endl;
		cout << "2 - Отнять от дроби число " << endl;
		cout << "3 - Умножить дробь на число " << endl;
		cout << "4 - Разделить дробь на число " << endl;
		cout << "0 - Выход! " << endl;
		cin >> number;
		switch (number)
		{
		case 1:
			cout << "Введите слогаемое: " << endl;
			cin >> num_one;
			fraction.sum(num_one);
			break;
		case 2:
			cout << "Введите вычитаемое: " << endl;
			cin >> num_one;
			fraction.sub(num_one);
			break;
		case 3:
			cout << "Введите множитель: " << endl;
			cin >> num_one;
			fraction.mult(num_one);
			break;
		case 4:
			cout << "Введите делитель: " << endl;
			cin >> num_one;
			fraction.div(num_one);
			break;
		default:
			break;
		}
	} while (number != 0);

	return 0;
}