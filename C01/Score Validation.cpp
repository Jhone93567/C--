#include <iostream>

using namespace std;

int main()
{
	int N; //contador
	float nota; //nota a ser inserida
	float media; //media de 2 notas

	N = 0; //contador começa no 0

	media = 0; //media começa no 0

	cout << fixed;
	cout.precision(2); //imprimir com 2 casas apos a virgula

	while(N != 2) // repetir o bloco ate 2 valores entre 0 e 10 forem inseridos
	{
		cin >> nota; //entrada nota

		if (nota > 0 && nota <= 10) //se a nota estiver entre 0 e 10 ela entra
		{
			media = media + nota;//aiciona a nota ao calcula da media
			N++;//adiciona +1 para o contador de notas validas
		}
		else // se nao, ela é invalida
		{
			cout << "nota invalida" << endl;
		}
		if(N == 2) //depois de 2 notas validas
		{
			media = media / 2; //calcular a media

			cout << "media = " << media << endl; // imprimir a media
		}
	}

	return 0;
}
