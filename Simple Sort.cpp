#include <iostream>

using namespace std;

int main () 
{
	int X;
	int Y;
	int Z;
	
	cin >> X >> Y >> Z;
	
	if (X <= Y && Y <= Z)
		cout << X << endl << Y << endl << Z << endl << endl;
	else {}
		if (X <= Z && Z <= Y)
			cout << X << endl << Z << endl << Y << endl << endl;
		else {}
			if (Y <= X && X <= Z)
				cout << Y << endl << X << endl << Z << endl << endl;
			else {}
				if (Y <= Z && Z <= X)
					cout << Y << endl << Z << endl << X << endl << endl;
				else {}
					if (Z <= X && X <= Y)
						cout << Z << endl << X << endl << Y << endl << endl;
					else {}
						if (Z <= Y && Y <= X)
							cout << Z << endl << Y << endl << X << endl << endl;
						else {}
							
	cout << X << endl << Y << endl << Z << endl;
	
	return 0;
}