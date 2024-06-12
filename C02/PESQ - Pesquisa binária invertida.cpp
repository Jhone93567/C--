#include <iostream>

using namespace std;

// Busca binaria invetida em que o vetor buscado esta em ordem decrescente
int busca(int x, int n, int vetor[])
{
    int i = 0;
    int m;
    n--;

    do
    {
        m = (i + n) / 2;

        if (vetor[m] == x)
        {
            return m;
        }
        else if (vetor[m] < x)
        {
            i = m + 1;
        }
        else
        {
            n = m - 1;
        }

    } while (i < n);

    return -1;
}

int main()
{
    // Declarando as variaveis
    int n;
    int vetor[10001];
    int x;

    // Entrada numero de elementos no vetor
    cin >> n;

    // Entrada de dados no vetor
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    // Entrada do numero a ser buscado
    cin >> x;

    if (busca(x, n, vetor) == -1) // Se a funcao retornar -1, o numero nao existe no vetor
    {
        cout << x << " nao encontrado" << endl;
    }
    else // se retornao outro numero, esse numero e a posicao de x no vetor
    {
        cout << x << " encontrado na posicao " << busca(x, n, vetor) << endl;
    }

    return 0;
}