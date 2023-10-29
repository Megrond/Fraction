#include "Fraction.h"

void Fraction::input(int num_one, int num_two)
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

void Fraction::mult(int num)
{
	chislitel *= num;
	cout << "Äנמבü:  " << chislitel << "/" << znamenatel << endl;
}

void Fraction::div(int num)
{
	znamenatel *= num;
	cout << "Äנמבü:  " << chislitel << "/" << znamenatel << endl;

}

void Fraction::sum(int num)
{
	chislitel += (num * znamenatel);
	cout << "Äנמבü:  " << chislitel << "/" << znamenatel << endl;

}

void Fraction::sub(int num)
{
	chislitel -= (num * znamenatel);
	cout << "Äנמבü:  " << chislitel << "/" << znamenatel << endl;

}

void Fraction::show()
{
	{
		cout << "Äנמבü:  " << chislitel << "/" << znamenatel << endl << endl;
	}
}

