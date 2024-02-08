#include <iostream>

using namespace std;

int main()
{
	int i; // Contador
	int n; // Numero de repetições
	float a; // Altura em m
	float ma; // Maior altura
	
	cin >> n;
	
	ma = 0;
	
	for (i = 0 ; i < n ; i++)
	{
		cin >> a;
		
		if (a > ma)
			ma = a;
	}
	
	cout << "Maior altura: " << ma << endl;
	
	return 0;
}