#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char nome[200]; // string do nome do jogador
    int idade;      // idade do jogador
    int N;          // contador

    cin >> N; // entradad de quantos jogadores serao avaliados

    for (int i = 0; i < N; i++) // bloco que repetira N vezes
    {
        cin.ignore(); // cin ignote antes do getline para ignorar o cin N e o cin idade
        cin.getline(nome, 100);
        cin >> idade;

        if (idade >= 18)
        {
            cout << nome << endl
                 << idade << endl;
        }
    }

    return 0;
}