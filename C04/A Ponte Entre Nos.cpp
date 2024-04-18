#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Declarando variaveis
    int N, M, aux1, aux2;
    list<int> adj[100];
    list<int>::iterator it;

    // Entrada do numero de nos e vertices
    cin >> N >> M;

    // Preenchendo a lista
    for (int i = 0; i < M; i++)
    {
        cin >> aux1 >> aux2;

        adj[aux1].push_back(aux2);
        adj[aux2].push_back(aux1);
    }

    // Removendo aux1 e aux2 das listas. A funcao .remove pode ser usada para buscar e remover o valor fornecido como parametro da lista
    cin >> aux1 >> aux2;
    adj[aux1].remove(aux2);
    adj[aux2].remove(aux1);

    for (int i = 1; i < N + 1; i++) // Repete o bloco N vezes porem comecando em 1
    {
        aux2 = 0; // Seta aux2 para 0

        for (it = adj[aux1].begin(); it != adj[aux1].end(); it++) // Varre a lista na posicao aux1
        {        
            if (*it == i || i == aux1) // Caso encontre na lista o valor i ou quando i for a posicao do vetor adj
            {
                aux2 = 1; // Seta aux2 para 1
            }
        }

        if (aux2 == 0) // Caso aux2 continuou 0 ou seja nao foi encontrado i na lista
        {
            cout << i << " "; // Imprime i pois nao ha conexao com ele
        }
    }

    cout << endl;

    return 0;
}