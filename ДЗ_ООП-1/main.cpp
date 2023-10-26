#include <iostream>

using namespace std;

class Fraction {

	int chislitel{};
	int znamenatel{};

public:
	Fraction(int num_one, int num_two)
	{
		if (num_two == 0)
		{
			cout << "Делитель не может быть равен 0" << endl;
		}
		else
		{
			chislitel = num_one;
			znamenatel = num_two;
		}	
	}
	void show()
	{
		cout << chislitel << "/" << znamenatel << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RU");

	Fraction fraction(5, 6);
	fraction.show();

	return 0;
}