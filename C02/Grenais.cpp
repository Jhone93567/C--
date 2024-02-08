#include <iostream>

using namespace std;

int main()
{
	int GolI; //gols do inter
	int GolG;//gols do gremio
	int X; // resposta do usuario
	int N; //contador numero de grenais
	int NG; //contador vitorias do gremio
	int NI; //contador vitorias do inter
	int NE; //contador empates

	N = 0;
	NG = 0;
	NE = 0;
	NI = 0; //todos os contadores começam no 0

	while(X != 2) //enquanto a resposta nao for 2, repete o bloco
	{
		X = 0; //resposta inicial, para nao criar conflito com o while

		N++; //adiciona +1 para o numero de grenais

		cin >> GolI >> GolG; //entrada numero de gols

		if (GolI > GolG) //se o inter fez mais gols, +1 para o contador de vitorias do inter
			NI++;
		else if (GolG > GolI)//se o gremio fez mais gols, +1 para o contador de vitorias do gremio
			NG++;
		else if (GolG == GolI)//se o inter fez o mesmo tanto de gols que o gremio, +1 para o contador de empates
			NE++;

		cout << "Novo grenal (1-sim 2-nao)" << endl; //pergunta se quer enviar outro grenal

		while(X != 1 && X != 2) //while para garantir que a resposta seja 1 ou 2
		{
			cin >> X; //entrada da resposta
			
			if (X == 1) // se for 1, continua com o codigo
				;
			else if(X ==2) //se for 2 sai do while
				break;				
		}
	}

	cout << N << " grenais" << endl; //imprimi o numero de grenais

	cout << "Inter:" << NI << endl; //imprimi o numero de vitorias do inter

	cout << "Gremio:" << NG << endl; //imprimi o numero de vitoris do gremio

	cout << "Empates:" << NE << endl; //imprimi o numero de empates

	if (NI > NG) //bloco que imprimi o vencedor, ou imprimi que nao houve vencedores caso o numero de vitorias dos dois sejam iguais
		cout << "Inter venceu mais" << endl;
	else if(NG > NI)
		cout << "Gremio venceu mais" << endl;
	else if (NG == NI)
		cout << "Nao houve vencedor" << endl;

	return 0;
}
