#include <iostream>
#include<Windows.h>
#include <iomanip>
#include "Fraction.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int num_one{}, num_two{}, number{};
	cout << "������� ���������:" << endl;
	cin >> num_one;
	cout << "������� �����������:" << endl;
	cin >> num_two;
	Fraction fraction;

	fraction.input(num_one, num_two);
	do {
		fraction.show();
		cout << "1 - ��������� � ����� ����� " << endl;
		cout << "2 - ������ �� ����� ����� " << endl;
		cout << "3 - �������� ����� �� ����� " << endl;
		cout << "4 - ��������� ����� �� ����� " << endl;
		cout << "0 - �����! " << endl;
		cin >> number;
		switch (number)
		{
		case 1:
			cout << "������� ���������: " << endl;
			cin >> num_one;
			fraction.sum(num_one);
			break;
		case 2:
			cout << "������� ����������: " << endl;
			cin >> num_one;
			fraction.sub(num_one);
			break;
		case 3:
			cout << "������� ���������: " << endl;
			cin >> num_one;
			fraction.mult(num_one);
			break;
		case 4:
			cout << "������� ��������: " << endl;
			cin >> num_one;
			fraction.div(num_one);
			break;
		default:
			break;
		}

	} while (number != 0);

	return 0;
}