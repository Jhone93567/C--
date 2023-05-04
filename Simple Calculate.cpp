#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int x;
	int X;
	int y;
	int Y;
	float z;
	float Z;
	
	cin >> x >> y >> z;
	cin >> X >> Y >> Z;
	
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << y * z  +  Y * Z << endl;
	
	return 0;
}