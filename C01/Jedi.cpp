#include <iostream>
#include <cstring>

using namespace std;

struct Perfil // struct que armazenara o nome e a base de cada padawan
{
    char nome[200];
    int base;
};

int main()
{
    int N;           // contador
    Perfil p[1001];  // chama a struct
    char busca[200]; // nome a ser buscado
    int result = 0;

    cin >> N; // entrada de quantas vezes repetira o codigo

    for (int i = 0; i < N; i++) // repete o codigo N vezes
    {
        cin.ignore();                // ignora o enter do cin N e cin base
        cin.getline(p[i].nome, 200); // entrada do nome do padawan
        cin >> p[i].base;            // entrada de base
    }

    cin.ignore();            // ignora o cin da base
    cin.getline(busca, 200); // entrada do nome a ser buscado

    for (int i = 0; i < N; i++) // repete o bloco N vezes denovo
    {
        if (!strcmp(busca, p[i].nome)) // busca se o nome digitado esta dentro do vetor
        {
            result = p[i].base; // se estiver salva o numero da base dele
        }
    }

    if (result != 0) // caso haja alteraçao no result, quer dizer que foi encotrado um cavaleiro
    {
        cout << "Este cavaleiro esta na base " << result << endl; // imprime o numero dele da base que esta salvo em result
    }
    else
        cout << "Este cavaleiro nao esta cadastrado" << endl; // caso o result nao seja alterado que dizer que nao ja ninguem com esse nome

    return 0;
}