#include <iostream>

using namespace std;

int main()
{
	int X; // Contador
	int N; // Numero de repetições
	int n; // Numeros a serem somados
	int s; // Resultado
	float m; // Media
		
	cin >> N; // Entrada numero de repetições	
		
	s = 0;
	
	for (X = 0; X < N; X++) // Executa o comando 'N' vezes
	{
		cin >> n;
		s = s + n;
	}
	
	m = (float)s / N;
	
	cout << "Soma = " << s << endl;
	cout << "Media = " << m << endl;
	
	return 0;
}