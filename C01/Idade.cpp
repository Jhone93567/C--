#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
	int idade;
	char letra;
	   
	cin >> idade;
	cin >> letra;
	   
	if (idade <= 10)
	    if (letra == 'v' || letra == 'V')
           cout << "Bem vindo ao clube dos Vs" << endl;
    	else		
		   cout << "Voce nao e bem vindo" << endl;
    else		
	    cout << "Voce nao e bem vindo" << endl;
		   
	return 0;
}