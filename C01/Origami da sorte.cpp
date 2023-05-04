#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	int x;
	
	cout << "Fale um numero: ";
	
	cin >> n;
	
	n = n % 2; 

	if (n == 1)
	{
		cout << "1 4 8 5" << endl;
		cout << "Escolha um numero: ";
		cin >> x;
		switch(x)
		{
		case 1:
			cout << "Estudioso" << endl;
			break;
		case 4:
			cout << "Bonito" << endl;
			break;
		case 8:
			cout << "Carinhoso" << endl;
			break;
		case 5:
			cout << "Feio" << endl;
			break;
		default:
			break;
		}
	}
	else 
	{
		cout << "2 3 6 7" << endl;
		cout << "Escolha um numero: ";
		cin >> x;
		switch(x)
		{
		case 2:
			cout << "Legal" << endl;
			break;
		case 3:
			cout << "Inteligente" << endl;
			break;
		case 6:
			cout << "Burro" << endl;
			break;
		case 7:
			cout << "Chato" << endl;
			break;
		default:
			break;
		}
	
	return 0;
	}
}