#include <iostream>
#include <cstdlib>

using namespace std;

int main () 
{
	int A;
	int B;
	int C;
	int AB;
	
	cin >> A >> B >> C;
	
	AB = (A + B + abs(A - B)) / 2; // abs retorna o valor absoluto de uma integral (modulo)
	
	cout << (AB + C + abs(AB - C)) / 2 << " eh o maior" << endl;	
		
	return 0;
}