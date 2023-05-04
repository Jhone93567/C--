#include <iostream>

using namespace std;

int main()
{
	int X;
	int Y; //duas integrais

	while(X != Y) //enqunto elas forem diferentes, repetir o bloco
	{
		cin >> X >> Y; // entrada das variaveis

		if(X > Y) // se x for maior, decrescentes
			cout << "Decrescente" << endl;
		else if(Y > X) // se y for maior, crescentes
			cout << "Crescente" << endl;
	}

	return 0;
}
