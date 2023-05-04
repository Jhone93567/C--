#include <iostream>

using namespace std;

int main()
{
	int X;//Horas que começou
	int Y;//Minutos que começou
	int x;//Horas que terminou
	int y;//Minutos que terminou
	int hf;//Horas finais
	int mf;//Minutos finais

	cin >> X >> Y >> x >> y;//Entrada

	if (X >= x && y <= Y)//Comando caso o jogo dure mais que 24 horas
	{
		x = x + 24;
	}
	if(y < Y)//Comando caso os minutos finais sejam menores que os iniciais
	{
		x--;
		y = y + 60;
	}
	hf = x - X;//Horas finais menos as iniciais
	mf = y - Y;//Minutos finais menos os iniciais

	cout << "O JOGO DUROU " << hf << " HORA(S) E " << mf << " MINUTO(S)" << endl;

	return 0;
}
