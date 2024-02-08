#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () 
{
	string N;
	double X;
	double Y;
		
	getline (cin,N);
	cin >> X;
	cin >> Y;
	
	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << X + Y / 100 * 15 << endl;	
		
	return 0;
}