#include <iostream>
#include <list>

#define vertices 10

using namespace std;

// Struct que armazena destino e peso dos vertices
struct no
{
    int destino;
    int peso;
};

void prim(list<no>adj[vertices], int nVertices, int start)
{
    list<no>::iterator it; // ponteiro auxiliar para lista
    bool visitado[10]; // vetor booleano que armazena se um vertice foi visitado
    int distancia[10],parente[10],pesoTotal = 0; // vetor que armazena a distancia de cada vertice, seu parente e o peso total
    int atual = start; // variavel que armazenara qual o vertice atual

    // atriuindo os valores inicias de cada vetor
    for (int i = 0; i < nVertices; i++)
    {
        distancia[i] = 1000;
        parente[i] = -1;
        visitado[i] = false;
    }

    distancia[start] = 0; // setando a distancia no vetor inicial a ele mesmo

    while (visitado[atual] == false) // Enquanto nao visitar todos os vertices
    {
        visitado[atual] = true; // Marca o vetor atual true

        for (it = adj[atual].begin(); it != adj[atual].end(); it++) // Varre a lista na posicao atual
        {
            if (visitado[it->destino] == false && distancia[it->destino] > it->peso) // caso nao tenha visitado o vertice que o atual esta ligado e seu peso e menor que a distancia ja encontrada
            {
                distancia[it->destino] = it ->peso; // atribui o menor peso ao vetor de distancia
                parente[it->destino] = atual; // e o parente para o vetor de parentes
            }
        }

        for (int i = 0; i < nVertices; i++) // for que repete para cada vertice
        {
            if (visitado[i] == false) // caso o vertice na posicao i nao tenha sido visitado
            {
                atual = i; // atribui ele como atual
                break; // quebra o for para salvar memoria
            }
            
        }
        

    }

    cout << "Arvore Geradora Minima:" << endl;
    
    for (int i = 1; i < nVertices; i++) // varre o grafo comecando do vertice 1
    {
        cout << parente[i] << " " << i << endl; // imprime seu parente e o atual
    }

    for (int i = 0; i < nVertices; i++) // varre o vetor distancia 
    {
        pesoTotal += distancia[i]; // soma todos os valores do vetor distancia
    }
    
    cout << "Custo: " << pesoTotal << endl; // imprime a soma
}

int main()
{
    // Declarando variaveis
    bool orientado;
    int nVertices,inicio,o,d,p;
    list<no>adj[vertices];

    cin >> nVertices >> orientado >> inicio;

    while (cin >> o >> d >> p && o != -1 && d != -1 && p != -1) // Lembrar que e possivel usar cin como argumento
    {
        adj[o].push_back({d,p}); // lemprar de usar {} para dar push sem struct auxiliar
        if (!orientado)
        {
            adj[d].push_back({o,p});
        }
    }
    
    prim(adj,nVertices,inicio);

    return 0;
}