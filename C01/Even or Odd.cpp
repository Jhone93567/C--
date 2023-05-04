#include <iostream>

using namespace std;

int main()
{
	int i; //contador
	int n; //quantos numeros serao testados
	int x; //numero a ser testado
	
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 0)
			cout << "NULL" << endl;
		else if (x < 0 && x % 2 == 0)
			cout << "EVEN NEGATIVE" << endl;
		else if (x < 0 && x % 2 == -1)
			cout << "ODD NEGATIVE" << endl;
		else if (x > 0 && x % 2 == 0)
			cout << "EVEN POSITIVE" << endl;
		else if (x > 0 && x % 2 == 1)
			cout << "ODD POSITIVE" << endl;	
	}
	
	return 0;
}