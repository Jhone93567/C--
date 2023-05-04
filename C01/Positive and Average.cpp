#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int i; // Contador
	float n; // Numeros
	int x; // Contador de numeros positivos
	float soma; //Soma dos numeros
	float media; // Media dos numeros
	
	x = 0; // Contador começa no 0
	soma = 0; //Soma começa no 0
	
	for (i = 0; i < 6; i++) // Contador começa no 0 e vai ate o 6
	{
		cin >> n;
		if(n > 0) // Se o numero for positivo, mais 1 pra contagem
		{
			x++;
			soma = soma + n;
		}
	}
	
	media = soma / x;
		
	cout << x << " valores positivos" << endl;
	cout << fixed << setprecision(1);
	cout << media << endl;
	
	return 0;
}