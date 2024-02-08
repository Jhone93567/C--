#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int d;
	int m;
	int a;
	int n;
	int delta;
	int ds;
	int g;
	int f;
	double frac;
	double inteira;
	double ns;
		
	cin >> d >> m >> a;
	
	if (m <= 2)
	{
	g = a - 1;
	f = m + 13;
	}
	else
	{
	g = a;
	f = m + 1;
	}
	
	n = (int)(365.25 * g) + (int)(30.6 * f) - 621049 + d;
	
	if (n < 36523)
		delta = 2;
	else if(36523 <= n && n < 73048)
		delta = 1;
	else
		delta = 0;
	
	ns = n / 7.0;
	
	frac = modf(ns , &inteira);
	
	ds = round (frac * 7) + delta + 1;
	
	switch(ds)
	{
	case 1:
		cout << "Domingo" << endl;
		break;
	case 2:
		cout << "Segunda-feira" << endl;
		break;
	case 3:
		cout << "Terca-feira" << endl;
		break;
	case 4:
		cout << "Quarta-feira" << endl;
		break;
	case 5:
		cout << "Quinta-feira" << endl;
		break;
	case 6:
		cout << "Sexta-feira" << endl;
		break;
	case 7:
		cout << "Sabado" << endl;
		break;
	default:
		break;
	}
	
	return 0;
}