#include <iostream>

using namespace std;

// funcao que faz uma busca binario em um vetor, atras de x
int busca(int vetor[], int x, int n)
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
        else if (vetor[m] > x)
        {
            n = m - 1;
        }

    } while (i <= n);

    return -1;
}

int main()
{
    // Declarando as variaveis
    int x[10001];
    int n;
    int aux;

    // Entrada
    cin >> n;

    // Adiciona n elementos no vetor
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    // Entrada do numero a ser buscado
    cin >> aux;

    // se a funcao retornar -1, o numero nao existe no vetor
    if (busca(x, aux, n) == -1)
    {
        cout << "Nao localizado" << endl;
    }
    // Se nao, retorna a posicao do numero buscado
    else
    {
        cout << "Corredor " << busca(x, aux, n) << endl;
    }

    return 0;
}