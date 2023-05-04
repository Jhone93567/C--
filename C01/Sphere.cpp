#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double R;
	
	cin >> R;
	
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << ((double) 4/3) * 3.14159 * pow(R,3) << endl;
	
	return 0;
}