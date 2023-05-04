#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int nota;
	
	cin >> nota;
	
	switch(nota)
	{
	case 5:
		cout << "Excelente! \n";
		break;
	case 4:
		cout << "Bom. \n";
		break;
	case 3:
		cout << "Regular.\n";
		break;
	case 2:
		cout << "Ruim.\n";
		break;
	case 1:
		cout << "Pessimo/Horrivel.\n";
		break;
	default:;
	}
		
	return 0;
}