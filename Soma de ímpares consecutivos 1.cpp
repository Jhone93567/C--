#include <iostream>

using namespace std;

int main ()
{
	int i; //contador
	int x; // Entrada
	int y; // contador de impares
	int soma; //soma dos numeros impares
	int n; // contador do for
	
	soma = 0; // soma começa com 0
	
	cin >> x >> y; // entrada x e y
	n = (x - y) / 2; // formula pra descobrir quantos numeros impares ha entre x e y
	
	if(x % 2 == 1 &&  x < y) // caso o x inicial seja impar, reduz ele para o proximo impar no intervalo
		x = x + 2;
	else if(x % 2 == 1 && x > y)
		x = x - 2;
	else if(x % 2 == -1 && x > y)
		x = x - 2;	
	else if(x % 2 == -1 && x < y)
		x = x + 2;
	
	for (i = 0; i < n; i++) // for, para somar os impares no intervalo
	{
		
		if(x % 2 == 1 &&  x < y)
		{
			soma = soma + x;
			x = x + 2;
		}
		else if(x % 2 == 1 && x > y)
		{
			soma = soma + x;
			x = x - 2;
		}
		else if(x % 2 == 0 && x < y)
		{
			soma = soma +(x + 1);
			x = x + 3; 
		}
		else if(x % 2 == 0 && x > y)
		{
			soma = soma + (x - 1);
			x = x - 3;
		}
		else if(x % 2 == -1 && x < y)
		{
			soma = soma + x;
			x = x + 2;
		}
		else if(x % 2 == -1 && x > y)
		{
			soma = soma + x;
			x = x - 2;
		}
	}
		
	cout << soma << endl;
	
	return 0;
}