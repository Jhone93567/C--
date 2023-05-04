#include <iostream>

using namespace std;

int main()
{
	int N; //numero par
	
	N = 2; //o primeiro numero par e 2
	
	while(N <= 100) //repetir o bloco ate N chegar a 100
	{
		cout << N << endl; //imprimir N
		
		N++;
		N++; // adicionar mais 2 ao N
	}
	
	return 0;
}