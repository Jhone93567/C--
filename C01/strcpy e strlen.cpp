#include <iostream>
#include <cstring> // biblioteca com comandos para interagir com vetores

using namespace std;

int main()
{
    char nome[50]; // vetor de letras
    int t;

    strcpy(nome, "Marco"); // copia Marco para o vetor nome

    cout << nome << endl;

    t = strlen(nome); // strlen retorna o comprimento do vetor, so funciona com vetor de letras

    cout << "t = " << t << endl;

    return 0;
}