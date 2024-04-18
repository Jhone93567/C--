#include <iostream>
#include <list>

using namespace std;

// Struct No que armazena o destino e o peso de cada vertice
struct No
{
    int d;
    int peso;
};

int main()
{
    // Declarando variaveis
    int N, x, y, z;
    bool orientado;
    list<No> adj[10];
    list<No>::iterator it;

    cin >> N >> orientado; // Entrada do numero de nos e se o grafo sera orientado

    while (cin >> x >> y >> z && x != -1 && y != -1 && z != -1) // Enquanto nao receber 3 entradas como -1
    {
        // Registrando os valores na lista de adj
        adj[x].push_back({y, z});
        if (!orientado)
        {
            adj[y].push_back({x, z});
        }
    }

    // Lendo cada posicao do vetor adj e imprimindo seus valores
    for (int i = 0; i < N; i++)
    {
        for (it = adj[i].begin(); it != adj[i].end(); it++)
        {
            cout << i << " " << it->d << " " << it->peso << endl;
        }
    }

    return 0;
}