#include <iostream>

using namespace std;

int main()
{
	float X; //entrada, salario

	cin >> X;

	cout << fixed;
	cout.precision (2); //said com 2 casas dps da virgula

	if(X <= 400.00)
	{
		cout << "Novo salario: " << X * 1.15 << endl;
		cout << "Reajuste ganho: " << X * 0.15 << endl;
		cout << "Em percentual: 15 %" << endl;
	}
	else if(X > 400.00 && X <= 800.00)
	{
		cout << "Novo salario: " << X * 1.12 << endl;
		cout << "Reajuste ganho: " << X * 0.12 << endl;
		cout << "Em percentual: 12 %" << endl;
	}
	else if(X > 800.00 && X <= 1200.00)
	{
		cout << "Novo salario: " << X * 1.1 << endl;
		cout << "Reajuste ganho: " << X * 0.1 << endl;
		cout << "Em percentual: 10 %" << endl;
	}
	else if(X > 1200.00 && X <= 2000.00)
	{
		cout << "Novo salario: " << X * 1.07 << endl;
		cout << "Reajuste ganho: " << X * 0.07 << endl;
		cout << "Em percentual: 7 %" << endl;
	}
	else if(X > 2000.00)
	{
		cout << "Novo salario: " << X * 1.04 << endl;
		cout << "Reajuste ganho: " << X * 0.04 << endl;
		cout << "Em percentual: 4 %" << endl;
	}

	return 0;
}
