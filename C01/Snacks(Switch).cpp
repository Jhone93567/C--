#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
	int X;
	int Y;
	
	cin >> X >> Y;
	
	cout << fixed << setprecision(2);
	
	switch(X)
	{
	case 1:
		cout << "Total: R$ " << 4.00 * Y << endl;
		break;
	case 2:
		cout << "Total: R$ " << 4.50 * Y << endl;
		break;
	case 3:
		cout << "Total: R$ " << 5.00 * Y << endl;
		break;
	case 4:
		cout << "Total: R$ " << 2.00 * Y << endl;
		break;
	case 5:
		cout << "Total: R$ " << 1.50 * Y << endl;
		break;
	default:; 
	}
						  		
	return 0;
}