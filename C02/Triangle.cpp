#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	float A;
	float B;
	float C; //tres lados
	
	cin >> A >> B >> C; //entrada das medidas dos lados

	cout.precision(1);
	cout << fixed; // resultado com 1 casa depois da virgula
	
	if (A > sqrt(pow((B - C), 2)) && A < B + C) // para formar um triangulo, um dos lados tem que ser maior q o modulo da diferença dos outros dois, e menor que a soma dos mesmos
		cout << "Perimetro = " << A + B + C << endl; //se for triangulo, imprimir seu perimetro
	else 
		cout << "Area = " << (A + B) * C / 2 << endl; //se n for triangulo, imprimir a area de um trapezio com bases A e B e altura C

		return 0;
}
