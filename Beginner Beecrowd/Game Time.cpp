#include <iostream>

using namespace std;

int main()
{
	int X;//Horas que começou o jogo
	int Y;//Horas que terminou o jogo

	cin >> X >> Y;//Entrada

	if(X >= Y)//Comando para caso o jogo dure mais que 24 horas
		Y = Y + 24;
	
	cout << "O JOGO DUROU " << Y-X << " HORA(S)" << endl;

	return 0;
}
