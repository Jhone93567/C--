#include<iostream>

using namespace std;

struct info
{
    char nome[100];
    int ano;
};

int main()
{
    info filme; // armazena os dados de um filme

    // Lendo dados do filme
    cin.getline(filme.nome,100);
    cin >> filme.ano;

    // Mostrando dados do filme
    cout << "Nome: " << filme.nome << endl;
    cout << "Ano: " << filme.ano << endl;

    return 0;
}