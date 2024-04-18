#include <iostream>
#include <list>

using namespace std;

struct no
{
    int destino;
    int peso;
};

void dijkstra(list<no> adj[], int nVertices, int start, int end)
{
    list<no>::iterator it;          // ponteiro auxiliar para lista
    bool visitado[10];              // vetor booleano que armazena se um vertice foi visitado
    int distancia[10], parente[10]; // vetor que armazena a distancia de cada vertice, seu parente e o peso total
    int atual = start, dist;        // variavel que armazenara qual o vertice atual
    list<int> aux;                  // Lista auxiliar para achar o menor caminho
    list<int>::iterator it1;        // Ponteiro auxiliar do tipo int

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
            if (distancia[it->destino] > distancia[atual] + it->peso) // caso nao tenha visitado o vertice que o atual esta ligado e seu peso e menor que a distancia ja encontrada
            {
                distancia[it->destino] = distancia[atual] + it->peso; // atribui o menor peso ao vetor de distancia
                parente[it->destino] = atual;                         // e o parente para o vetor de parentes
            }
        }

        atual = start; // Volta atual para o comeco para evitar loop
        dist = 10000;  // Seta a variavel dist para um valor mais alto

        for (int i = 0; i < nVertices; i++) // for que repete para cada vertice
        {
            if (visitado[i] == false && dist > distancia[i]) // caso o vertice na posicao i nao tenha sido visitado
            {
                dist = distancia[i]; // Seta dist para a menor distancia
                atual = i;           // atribui ele como atual
            }
        }
    }

    aux.push_front(end); // Insere end na primeira posicao da lista

    while (aux.front() != start) // Enquanto a primeira posicao nao for o vertice inicial
    {
        aux.push_front(parente[aux.front()]); // Insere o parente do vertice da primeira posicao, na primeira posicao
    }

    // Imprime a saida
    cout << "Menor caminho: ";

    for (it1 = aux.begin(); it1 != aux.end(); it1++)
    {
        cout << *it1 << " ";
    }

    cout << endl
         << "Custo: " << distancia[end] << endl;
}

int main()
{
    // Declarando variaveis
    bool orientado;
    int nVertices, inicio, final, o, d, p;
    list<no> adj[10];

    cin >> nVertices >> orientado >> inicio >> final; // Entrada do numero de vertices, booleano para orientado, vertice inicial e vertice final

    while (cin >> o >> d >> p && o != -1 && d != -1 && p != -1) // Lembrar que e possivel usar cin como argumento
    {
        adj[o].push_back({d, p}); // lemprar de usar {} para dar push sem struct auxiliar
        if (!orientado)
        {
            adj[d].push_back({o, p});
        }
    }

    dijkstra(adj, nVertices, inicio, final);

    return 0;
}