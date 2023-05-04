#include <iostream>

using namespace std;

int main()
{
	long long int A; //usa-se long antes do int quando o intervalo do exercicio for maior do que o suportado pelo int
	long long int B;
	long long int Soma;
	
	cin >> A >> B;
	
	Soma = ((A + B)* (B - A + 1))/2; // fórmula da progressao aritmetica
		
	cout << Soma << endl;

	return 0;
}
