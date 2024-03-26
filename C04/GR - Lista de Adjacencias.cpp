#include <iostream>
#include <list>

using namespace std;

struct no
{
    int v;    // vertice adjacente
    int peso; // peso da aresta
};

void cria_aresta(list<no> adj[], int u, int v, int p, int orientado)
{
    if (orientado == 1)
    {
        
    }
    else
    {
    }
}

int main()
{
    int vertices, origem, destino, peso;
    int orientado;

    cin >> vertices >> orientado;

    list<no> adj[10];

    cin >> origem >> destino >> peso;

    while (origem != -1 && destino != -1 && peso != -1)
    {
        cria_aresta(adj, origem, destino, peso, orientado);
    }

    return 0;
}