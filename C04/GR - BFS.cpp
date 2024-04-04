#include <iostream>
#include <list>

using namespace std;

struct no // struct q armazena a origem destino e o peso de cada vertice do grafo
{
    int origem;
    int destino;
    int peso;
};

void bfs(list<no> adj[], int nVertices, int s) // Funcao que retorna verdadeiro para um grafo conexo e falso caso contrario
{
    list<int> fila; // fila auxiliar para os vertices que precisam sem analisados
    list<no>::iterator it; // ponteiro para varrer a lista
    bool visitado[10]; // vetor booleano que armazena se um vertice foi visitado
    int atual; // variavel que armazenara qual o vertice atual

    // atriuindo falso ao vetor inteiro
    for (int i = 0; i < nVertices; i++)
    {
        visitado[i] = false;
    }

    fila.push_back(s); // Atribuindo o vetor inicial a fila

    while (!fila.empty()) // Enquanto a fila nao estiver vazia
    {
        atual = fila.front(); // atribuindo o no atual a variavel atual

        cout << atual << endl; // Imprime qual o vetor atual

        visitado[atual] = true; // Atribui true ao vertice atual no vetor de visitados

        for (it = adj[atual].begin(); it != adj[atual].end(); it++) // Varre a lista na posicao atual
        {
            if (visitado[it->destino] == false) // caso nao tenha visitado o vertice que o atual esta ligado
            {
                fila.push_back(it->destino); // adiciona aquele vertice a fila de busca
                visitado[it->destino] = true; // atribui ele como visitado para evitar de adicionar ele mais de 1 vez a fila de busca
            }

            if (it->peso == 0) // caso o vertice nao tenha peso
            {
                cout << atual << " " << it->destino << endl; // imprime o atual e seu destino
            }
            else // caso tenha peso
            {
                cout << atual << " " << it->destino << it->peso << endl; // imprime o atual, seu destino e seu peso
            }
        }

        fila.pop_front(); // remove o vertice que acabou de ser varrido da lista
    }
}

int main()
{
    // criando variaveis
    int n, start, v, d, p;
    list<no> adj[10];

    cin >> n >> start; // entrada do numero de vertices(menor que 10) e do vertice inicial

    cin >> v >> d >> p; // entrada do vertice e da sua ligacao e do peso

    while (v != -1 && d != -1 && p != -1) // enquanto nao receber -1 de entrada
    {
        // Inserindo os elementos no vetor
        adj[v].push_back({v, d, p});
        adj[d].push_back({d, v, p});

        cin >> v >> d >> p; // outra entrada
    }

    // Chamando a funcao de busca
    bfs(adj, n, start);

    return 0;
}