#include <iostream>

using namespace std;

struct info
{
    char nome[100];
    int ano;
};

int main()
{
    info filme[5]; // armazena os dados de um filme
    int n;
    int i;

    // Lendo quantidade de filmes
    cin >> n;

    // Lendo dados do filme
    for (i = 0; i < n; i++)
    {
        cin.ignore();
        cin.getline(filme[i].nome, 100);
        cin >> filme[i].ano;
    }

    // Mostrando dados do filme
    for (i = 0; i < n; i++)
    {
        cout << "Nome: " << filme[i].nome << endl;
        cout << "Ano: " << filme[i].ano << endl;
    }

    return 0;
}