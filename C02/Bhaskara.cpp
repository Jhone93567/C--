#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
	double A;
	double B;
	double C;
	double R1;
	double R2;
	double D;
	
	cin >> A >> B >> C;	
	
	D = pow(B,2)-4*A*C;
	
	if(D < 0 || 2 * A == 0)
		cout << "Impossivel calcular" << endl;
	else
	{
		R1 = (-B + sqrt(D))/(2 * A);
		R2 = (-B - sqrt(D))/(2 * A);
		
		cout << fixed << setprecision (5);
		cout <<"R1 = " << R1 << endl << "R2 = " << R2 << endl;
	}	
	return 0;
}