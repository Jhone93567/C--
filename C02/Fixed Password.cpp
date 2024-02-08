#include <iostream>

using namespace std;

int main()
{
	int X; //senha

	cin >> X; //Entrada

	while(X != 2002) //enquanto a senha nao estiver certa, repetir o bloco
	{
		cout << "Senha Invalida" << endl;

		cin >> X;
	}

	cout << "Acesso Permitido" << endl;

	return 0;
}
