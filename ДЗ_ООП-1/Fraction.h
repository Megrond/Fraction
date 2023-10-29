#pragma once
#include <iostream>
#include<Windows.h>

using namespace std;

class Fraction {

	int chislitel{};
	int znamenatel{};

public:
	void input(int num_one, int num_two);
	void mult(int num);
	void div(int num);
	void sum(int num);
	void sub(int num);
	void show();
};
