#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N; //Numero de entrada
	int x; //Numero de vezes que o numero sera elevado
	int i; // contagem
	int n; // numero que sera elevado
	
	cin >> N;//Entrada
	
	x = N/2; //Quantidade de numeros pares inclusos em N
	n = 2; // Primeiro numero par é o 2
	
	cout << fixed; //imprime o numero inteiro sem usar notações cientificas
	cout.precision(0); //imprimi com o numero dentro do parenteses de casa apos a virgula
	
	for(i = 0; i < x; i++)
	{
		cout << n << "^2 = " << pow(n,2) << endl;
		n = n + 2;
	}
		
	return 0;
}