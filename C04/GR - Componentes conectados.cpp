#include <iostream>
#include <list>

using namespace std;

bool conexo(bool adj[10][10], int n, int start) // Funcao que retorna verdadeiro para um grafo conexo e falso caso contrario
{
    list<int> fila; // fila auxiliar para os vertices que precisam sem analisados
    bool visitado[10]; // vetor booleano que armazena se um vertice foi visitado

    // atriuindo falso ao vetor inteiro
    for (int i = 0; i < n; i++)
    {
        visitado[i] = false;
    }

    fila.push_back(start); // Atribuindo o vetor inicial a fila

    while (!fila.empty()) // Enquanto a fila nao estiver vazia
    {
        visitado[fila.front()] = true; // Atribui true ao vertice atual no vetor de visitados

        for (int i = 0; i < n; i++) // varre a matriz de adjacencias a partir do vertice atual
        {
            if (adj[fila.front()][i] && visitado[i] == false) // caso o vertice esteja ligado a um vertice nao visitado
            {
                fila.push_back(i); // adiciona o nao visitado a lista
            }
        }

        fila.pop_front(); // remove o vertice que acabou de ser varrido da lista
    }

    for (int i = 0; i < n; i++) // caso tenha algum vertice nao visitado
    {
        if (visitado[i] == false)
        {
            return false; // retorna false
        }
    }

    return true; // caso contrario retorna true
}

int main()
{
    // criando variaveis
    int n, start, v, d;
    bool adj[10][10];

    // atribui falso a todas as posicoes da matriz de adj
    for (int i = 0; i < 10; i++)
    {
        for (int n = 0; n < 10; n++)
        {
            adj[i][n] = false;
        }
    }

    cin >> n >> start; // entrada do numero de vertices(menor que 10) e do vertice inicial

    cin >> v >> d; // entrada do vertice e da sua ligacao

    while (v != -1 && d != -1) // enquanto nao receber -1 de entrada
    {
        adj[v][d] = true; // atribui true ao vertice
        adj[d][v] = true;

        cin >> v >> d; // outra entrada
    }

    if (conexo(adj, n, start)) // caso a funcao retorne true
    {
        cout << "Conexo" << endl; // Imprime "conexo"
    }
    else // caso contrario
    {
        cout << "Nao conexo" << endl; // Imprime "nao conexo"
    }

    return 0;
}