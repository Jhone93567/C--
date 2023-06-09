#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

struct Filme
{
    char nomef[100];
    int clas;
    char gen[100];
};


int main()
{
    ifstream arq;
    Filme filme[200];
    int i = 0;

    /*CRIAR CODIGO PARA LER O ARUIVO*/

    while(!arq.eof())
    {
        arq.getline(filme[i].nomef,100);
        arq >> filme[i].gen;
        arq.ignore();

        i++;
    }
    

    char Nome[200]; // Vetor que armazena o nome do usuario
    int Idade; // Idade do usuario

    // Interface inicial que pedira o nome e a idade do usuario
    cout << "Bem vindo ao PiratexPlusPlus, primeiramente, qual o seu nome?" << endl;
    cin.getline(Nome, 200);

    cout << "Ola " << Nome << ", uma ultima coisa, qual a sua idade?" << endl;
    cin >> Idade;

    /*COLOCAR O CODIGO INTEIRO DENTRO DE UM wHILE*/

    return 0;
}