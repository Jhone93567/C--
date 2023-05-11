#include <iostream>
#include <cstring> // biblioteca com comandos para interagir com vetores

using namespace std;

int main()
{
    char nome[20]; // vetor de letras
    char sobrenome[200];
    char nome_completo[220];

    cin.getline(nome, 20); // usa-se .getline ao inves de cin porque o cin nao le espaços em branco
    cin.getline(sobrenome, 200);

    strcpy(nome_completo, nome);
    strcat(nome_completo, " ");       // como o strcat nao da espaco, temos que fazer isso manualmente
    strcat(nome_completo, sobrenome); // strcat faz a mesma coisa que o strcpy mas nao sobrescreve o que a esta no vetor

    cout << "Oi " << nome_completo << ", tudo bem?" << endl;

    return 0;
}