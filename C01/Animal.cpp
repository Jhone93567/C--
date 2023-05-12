#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char X[100]; // vertebrado ou invertebrado
    char Y[100]; // ave, mamifero, inseto ou anelideo
    char Z[100]; // alimenta��o(carnivoro,etc)

    cin.getline(X, 100);
    cin.getline(Y, 100);
    cin.getline(Z, 100); // Entrada

    if (!strcmp(X, "vertebrado")) // para comparar strings, usa-se "(aspas)
    {
        if (!strcmp(Y, "ave"))
        {
            if (!strcmp(Z, "carnivoro"))
            {
                cout << "aguia" << endl;
            }
            else if (!strcmp(Z, "onivoro"))
            {
                cout << "pomba" << endl;
            }
        }
        else if (!strcmp(Y, "mamifero"))
        {
            if (!strcmp(Z, "onivoro"))
            {
                cout << "homem" << endl;
            }
            else if (!strcmp(Z, "herbivoro"))
            {
                cout << "vaca" << endl;
            }
        }
    }
    else if (!strcmp(X, "invertebrado"))
    {
        if (!strcmp(Y, "inseto"))
        {
            if (!strcmp(Z, "hematofago"))
            {
                cout << "pulga" << endl;
            }
            else if (!strcmp(Z, "herbivoro"))
            {
                cout << "lagarta" << endl;
            }
        }
        else if (!strcmp(Y, "anelideo"))
        {
            if (!strcmp(Z, "onivoro"))
            {
                cout << "minhoca" << endl;
            }
            else if (!strcmp(Z, "hematofago"))
            {
                cout << "sanguessuga" << endl;
            }
        }
    }

    return 0;
}
