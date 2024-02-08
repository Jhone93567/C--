#include <iostream>

using namespace std;

int main () 
{
	int X;
	
	cin >> X;
	
	if (X == 61)
		cout << "Brasilia" << endl;
	else 
		if (X == 71)
			cout << "Salvador" << endl;
		else 
			if (X == 11)
				cout << "Sao Paulo" << endl;
			else 
				if (X == 21)
					cout << "Rio de Janeiro" << endl;
				else 
					if (X == 32)
						cout << "Juiz de Fora" << endl;
					else 
						if (X == 19)
							cout << "Campinas" << endl;
						else 
							if (X == 27)
								cout << "Vitoria" << endl;
							else 
								if (X == 31)
									cout << "Belo Horizonte" << endl;
								else
									cout << "DDD nao cadastrado" << endl;
	
	return 0;
}