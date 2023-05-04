#include <iostream>

using namespace std;

int main()
{
	double A;
	double B;
	double C;//3 variaveis de entrada para os lados
	double X;
	double Y;
	double Z;//3 variaveis que usei para ordenar em ordem decrescente

	cin >> A >> B >> C;// entrada

	if (A <= B && B <= C)//usei if para ordenar em ordem decrescente XYZ
	{
		X = C;
		Y = B;
		Z = A;
	}
	else if(A <= C && C <= B)
	{
		X = B;
		Y = C;
		Z = A;
	}
	else if (B <= A && A <= C)
	{
		X = C;
		Y = A;
		Z = B;
	}
	else if (B <= C && C <= A)
	{
		X = A;
		Y = C;
		Z = B;
	}
	else if (C <= A && A <= B)
	{
		X = B;
		Y = A;
		Z = C;
	}
	else if (C <= B && B <= A)
	{
		X = A;
		Y = B;
		Z = C;
	}

	if (X >= Y + Z) //caso nao forme um triangulo o codigo acaba aq
		cout << "NAO FORMA TRIANGULO" << endl;
	else
	{
		if((X * X) == (Y * Y) + (Z * Z))
			cout << "TRIANGULO RETANGULO" << endl;
		else if((X * X) > (Y * Y) + (Z * Z))
			cout << "TRIANGULO OBTUSANGULO" << endl;
		else if ((X * X) < (Y * Y) + (Z * Z))
			cout << "TRIANGULO ACUTANGULO" << endl;//ele poder ser retangulo,obtusangulo ou acutangulo
		
		if(X == Y && Y == Z)
			cout << "TRIANGULO EQUILATERO" << endl;
		else if(X == Y || Y == Z)
			cout << "TRIANGULO ISOSCELES" << endl;//pode tambem ser equilatero ou isosceles
	}

	return 0;
}
