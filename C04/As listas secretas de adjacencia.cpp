#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Declarando variaveis
    int N, M, aux1, aux2, contador = 0;
    list<int> adj[100];
    list<int>::iterator it, aux;

    // Entrada do numero de nos e vertices
    cin >> N >> M;

    // Atribuindo valores a lista de adj
    for (int i = 0; i < M; i++)
    {
        cin >> aux1 >> aux2;

        adj[aux1].push_back(aux2);
        adj[aux2].push_back(aux1);
    }
 
    for (int i = 1; i < N + 1; i++) // Lendo a lista de adj, comecando no 1
    {
        contador = 0; // Setando o contador em 0
        aux1 = 1000; // Setando a variavel aux em um valor alto

        for (it = adj[i].begin(); it != adj[i].end(); it++) // Lendo a primeira lista inteira para contar quantos vertices ela tem
        {
            contador++;
        }

        cout << contador << " "; // Imprime quantos vertices a primeira lista tem

        for (int x = 0; x < contador; x++) // Repete o bloco de acordo com o numero de vertices
        {
            for (it = adj[i].begin(); it != adj[i].end(); it++) // Le a lista inteira para achar o menor valor
            {
                if (*it < aux1) // Salva o menor valor e seu endereco de memoria
                {
                    aux1 = *it;
                    aux = it;
                }
            }

            cout << aux1 << " "; // Imprime o menor valor
            aux1 = 1000; // Reseta a variavel
            *aux = 1001; // Atribui um valor alto ao endereco do menor valor encontrado
        }
        cout << endl << endl;
    }

    return 0;
}