#include "Fraction.h"

void Fraction::input(uint32_t num_one, uint32_t num_two)
{
	if (num_two == 0)
	{
		cout << "Íמכü םו למזוע בûעü הוכטעוכול! " << endl;
	}
	else
	{
		chislitel = num_one;
		znamenatel = num_two;
	}
}

//void Fraction::mult(int num)
//{
//	chislitel *= num;
//	cout << "Äנמבü:  " << chislitel << "/" << znamenatel << endl;
//}
//
//void Fraction::div(int num)
//{
//	znamenatel *= num;
//	cout << "Äנמבü:  " << chislitel << "/" << znamenatel << endl;
//
//}
//
//void Fraction::sum(int num)
//{
//	chislitel += (num * znamenatel);
//	cout << "Äנמבü:  " << chislitel << "/" << znamenatel << endl;
//
//}
//
//void Fraction::sub(int num)
//{
//	chislitel -= (num * znamenatel);
//	cout << "Äנמבü:  " << chislitel << "/" << znamenatel << endl;
//
//}

void Fraction::show()
{
	{
		cout << "Äנמבü:  " << chislitel << "/" << znamenatel << endl << endl;
	}
}

Fraction Fraction::operator+(uint32_t num)
{
	chislitel += (num * znamenatel);
	return Fraction(chislitel, znamenatel);
}

Fraction Fraction::operator-(uint32_t numb) 
{
	chislitel -= (numb * znamenatel);
	return Fraction(chislitel, znamenatel);
}

Fraction Fraction::operator*(uint32_t numb)
{
	chislitel *= numb;
	return Fraction(chislitel, znamenatel);
}

Fraction Fraction::operator/(uint32_t numb) 
{
	znamenatel *= numb;
	return Fraction(chislitel, znamenatel);
}
