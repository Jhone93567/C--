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
    no aux; // auxiliar do tipo da struct para armazenar os dados que serao inseridos na lista
    aux.v = v; // armazenando v na auxiliar
    aux.peso = p; // armazenando o peso

    if (orientado == 1) // caso seja um grafo orientado
    {
        adj[u].push_back(aux); // apenas insere o vertice e seu peso
    }
    else // caso seja um grafo nao ordenado
    {
        adj[u].push_back(aux); // insere o vertice e peso

        // inverte o destino e o vertice que sera inserido
        aux.v=u; 
        adj[v].push_back(aux);   
    }
}

int main()
{
    int vertices, origem, destino, peso;
    int orientado;

    cin >> vertices >> orientado; // Entrada do numero de vertices e se o grafo e orientado ou nao

    list<no> adj[10]; // declarando a lista de adjacencia
    list<no>::iterator it; // declarando um iterator para ajudar na saida

    cin >> origem >> destino >> peso; // entrada dos dados a serem inseridos

    while (origem != -1 && destino != -1 && peso != -1) // enquanto nao receber todos os parametros -1
    {
        cria_aresta(adj, origem, destino, peso, orientado); // cadastra o vertice no grafo

        cin >> origem >> destino >> peso; // entrada dos parametros dnv
    }

    for (int i = 0; i < 10; i++) // le o grafo todo
    {
        for (it=adj[i].begin();it != adj[i].end();it++) // le cada elemento do vetor
        {
            cout << i << " " << it->v << " " << it->peso << endl; // Imprime na ordem, vertice, destino e peso
        }   
    }
    

    return 0;
}