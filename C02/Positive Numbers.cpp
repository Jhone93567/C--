#include <iostream>

using namespace std;

int main ()
{
	int i; // Contador
	float n; // Numeros
	int x; // Contador de numeros positivos
	
	x = 0; // Contador começa no 0
	
	for (i = 0; i < 6; i++) // Contador começa no 0 e vai ate o 6
	{
		cin >> n;
		if(n > 0) // Se o numero for positivo, mais 1 pra contagem
			x++;
	}
	
	cout << x << " valores positivos" << endl;
	
	return 0;
}