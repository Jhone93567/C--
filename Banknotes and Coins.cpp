#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double X;
	int R;
	int N;
	double fN;
	double iN;
	
	cin >> X;
	
	fN = modf(X,&iN);
	
	N = (int) iN;
	
	cout << "NOTAS:" << endl;
	cout << N / 100 << " nota(s) de R$ 100.00" << endl;
	R = N % 100;
	cout << R / 50 << " nota(s) de R$ 50.00" << endl;
	R = R % 50;
	cout << R / 20 << " nota(s) de R$ 20.00" << endl;
	R = R % 20;
	cout << R / 10 << " nota(s) de R$ 10.00" << endl;
	R = R % 10;
	cout << R / 5 << " nota(s) de R$ 5.00" << endl;
	R = R % 5;
	cout << R / 2 << " nota(s) de R$ 2.00" << endl;
	R = R % 2;
	cout << "MOEDAS:" << endl << R << " moeda(s) de R$ 1.00" << endl;
	R = fN * 100;
	cout << R / 50 << " moeda(s) de R$ 0.50" << endl;
	R = R % 50;
	cout << R / 25 << " moeda(s) de R$ 0.25" << endl;
	R = R % 25;
	cout << R / 10 << " moeda(s) de R$ 0.10" << endl;
	R = R % 10;
	cout << R / 05 << " moeda(s) de R$ 0.05" << endl;
	R = R % 05;
	cout << R / 01 << " moeda(s) de R$ 0.01" << endl;
	
	return 0;
}