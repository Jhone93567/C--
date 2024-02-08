#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
	int N; // Dias
	
	cin >> N;
	
	cout << N/365 << " ano(s)" << endl;
	cout << (N % 365) / 30 << " mes(es)" << endl;
	cout << N % 365 % 30 << " dia(s)" << endl;
			
	return 0;
}