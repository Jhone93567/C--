#include <iostream>

using namespace std;

int main()
{
	int X;
	int Y;//coorenadas X e Y

	cin >> X >> Y; //entrada

	while(X != 0 && Y != 0) //enquanto nenhuma das coordenadas for nula, repetir o bloco
	{
		if (X > 0 && Y > 0)
			cout << "primeiro" << endl;
		if (X < 0 && Y > 0)
			cout << "segundo" << endl;
		if (X < 0 && Y < 0)
			cout << "terceiro" << endl;
		if (X > 0 && Y < 0)
			cout << "quarto" << endl; //bloco que determina em qual quadrante o ponto está

		cin >> X >> Y; //segunda entrada
	}

	return 0;
}
