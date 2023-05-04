#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
	double X;
	
	cout << fixed << setprecision(2);
	
	cin >> X;
	
	if (X <= 2000.00)
		cout << "Isento" << endl;
	else 
		if (X > 2000.00 && X <= 3000.00)
			cout << "R$ " << (X - 2000.00) / 100 * 8 << endl;
		else 
			if (X > 3000.00 && X <= 4500.00)
				cout << "R$ " << (X - 3000.00) / 100 * 18 + 80.00 << endl;
			else 
				if (X > 4500.00)
					cout << "R$ " << (X - 4500.00) / 100 * 28 + 350 << endl;
				else 
	
	return 0;
}