#include <iostream>

using namespace std;

int main ()
{
	int i; //contador
	int x; // Entrada
	int n; // contador de pares
	
	n = 0;
	
	for (i = 0; i < 5; i++)
	{
		cin >> x;
		
		if(x % 2 == 0)
			n++;
	}
	
	cout << n << " valores pares" << endl;
	
	return 0;
}