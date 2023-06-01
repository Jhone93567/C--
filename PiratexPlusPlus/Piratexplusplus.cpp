#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

struct Usuario
{
    char Nome[100]; // Nome do usuario
    int Idade;      // Idade do usuario
    /* Bool para cada genero ou um vetor que armazena todos? */
};

int main()
{
    Usuario perfil1;

    // Interface inicial que pedira o nome e a idade do usuario
    cout << "Bem vindo ao PiratexPlusPlus, primeiramente, qual o seu nome?" << endl;
    cin.getline(perfil1.Nome, 100);

    cout << "Ola " << perfil1.Nome << ", uma ultima coisa, qual a sua idade?" << endl;
    cin >> perfil1.Idade;

    return 0;
}