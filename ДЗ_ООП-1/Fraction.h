#pragma once
#include <iostream>
#include<Windows.h>

using namespace std;

class Fraction {

	uint32_t chislitel{};
	uint32_t znamenatel{};

public:
	Fraction(uint32_t chislit, uint32_t znamen) {};

	void input(uint32_t num_one, uint32_t num_two);
	//void mult(int num);
	//void div(int num);
	//void sum(int num);
	//void sub(int num);

	Fraction operator+(uint32_t numb);
	Fraction operator-(uint32_t numb);
	Fraction operator*(uint32_t numb);
	Fraction operator/(uint32_t numb);

	void show();
};
