#include <iostream>

using namespace std;

int main()
{
	int N;
	int R;
	
	cin >> N;
	
	cout << N << endl;
	cout << N / 100 << " nota(s) de R$ 100,00" << endl;
	R = N % 100;
	cout << R / 50 << " nota(s) de R$ 50,00" << endl;
	R = R % 50;
	cout << R / 20 << " nota(s) de R$ 20,00" << endl;
	R = R % 20;
	cout << R / 10 << " nota(s) de R$ 10,00" << endl;
	R = R % 10;
	cout << R / 5 << " nota(s) de R$ 5,00" << endl;
	R = R % 5;
	cout << R / 2 << " nota(s) de R$ 2,00" << endl;
	R = R % 2;
	cout << R / 1 << " nota(s) de R$ 1,00" << endl;
	
	return 0;
}