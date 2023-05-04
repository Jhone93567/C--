#include <iostream>

using namespace std;

int main () 
{
	double n;
	
	cin >> n;
	
	if(0 <= n && n <= 25)
		cout << "Intervalo [0,25]" << endl;
	else
		if (25 < n && n <= 50)
			cout << "Intervalo (25,50]" << endl;
		else
			if (50 < n && n <= 75)
				cout << "Intervalo (50,75]" << endl;
			else 
				if (75 < n && n <= 100)
					cout << "Intervalo (75,100]" << endl;
				else
					cout << "Fora de intervalo" << endl;
		
		
	return 0;
}