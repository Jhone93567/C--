#include <iostream>

using namespace std;

int main()
{
	int N; //contador
	int X; //resposta do usuario
	float nota; //nota a ser inserida
	float media; //media de 2 notas

	N = 0; //contador começa no 0

	media = 0; //media começa no 0

	cout << fixed;
	cout.precision(2); //imprimir com 2 casas apos a virgula

	while(N != 2) // repetir o bloco ate 2 valores entre 0 e 10 forem inseridos
	{
		X = 0; //voltar a resposta para  0, para o while no final do codigo se repetir

		cin >> nota; //entrada nota

		if (nota > 0 && nota <= 10) //se a nota estiver entre 0 e 10 ela entra
		{
			media = media + nota; //adiciona a nota no calculo da media
			N++; // adiciona mais 1 para o numerod e notas valiadas
		}
		else // se nao, ela é invalida
		{
			cout << "nota invalida" << endl;
		}
		if(N == 2) //depois de 2 notas validas
		{
			media = media / 2; // calcular a media

			cout << "media = " << media << endl; // imprimir a media

			while (X != 1 && X != 2) //enquanto a resposta nao for 1 ou 2
			{
				cout << "novo calculo (1-sim 2-nao)" << endl; //perguntar se o usuario deseja fazer outro calculo e media

				cin >> X; //entrada da resposta

				if (X == 1) // se a resposta for 1
				{
					N = 0; //contador volta pra 0

					media = 0; // media volta pra 0
				}
				else if (X == 2) // se a resposta for 2
					break;
			}
		}
	}

	return 0;
}
