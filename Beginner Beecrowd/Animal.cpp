#include <iostream>
#include <string> // strings, usada para usar palavras inteiras e comparar-las

using namespace std;

int main()
{
	string X; //vertebrado ou invertebrado
	string Y; //ave, mamifero, inseto ou anelideo
	string Z; //alimentação(carnivoro,etc)

	cin >> X;
	cin >> Y;
	cin >> Z; //Entrada

	if (X == "vertebrado") // para comparar strings, usases "(aspas duplas)
	{
		if (Y == "ave")
		{
			if (Z == "carnivoro")
			{
				cout << "aguia" << endl;
			}
			else if (Z == "onivoro")
			{
				cout << "pomba" << endl;
			}
		}
		else if(Y == "mamifero")
		{
			if (Z == "onivoro")
			{
				cout << "homem" << endl;
			}
			else if (Z == "herbivoro")
			{
				cout << "vaca" << endl;
			}
		}
	}
	else if (X == "invertebrado")
	{
		if (Y == "inseto")
		{
			if (Z == "hematofago")
			{
				cout << "pulga" << endl;
			}
			else if (Z == "herbivoro")
			{
				cout << "lagarta" << endl;
			}
		}
		else if(Y == "anelideo")
		{
			if (Z == "onivoro")
			{
				cout << "minhoca" << endl;
			}
			else if (Z == "hematofago")
			{
				cout << "sanguessuga" << endl;
			}
		}
	}

	return 0;
}
