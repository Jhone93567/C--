#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
	double X;
	double Y;
	
	cin >> X >> Y;
	
	if(X == 1)
		X = 4;
	else 
		if (X == 2)
			X = 4.50;
		else 	
			if (X == 3)
				X = 5;
			else 	
				if (X == 4)
					X = 2;
				else 	
					if (X == 5)
						X = 1.50;
					else
					{	
					}
					
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << X * Y << endl;
						  		
	return 0;
}