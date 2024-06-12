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
    int x[101];
    int n = 0;
    int aux;

    // Entrada
    cin >> aux;

    // Adiciona elementos no vetor enquanto nao inserir um -1
    while (aux != -1)
    {
        x[n] = aux;

        n++;

        cin >> aux;
    }

    // Entrada do numero a ser buscado, re-aproveitando a variavel aux
    cin >> aux;

    // se a funcao retornar -1, o numero nao existe no vetor
    if (busca(x, aux, n) == -1)
    {
        cout << "Nao possui acesso" << endl;
    }
    // Se nao, retorna a posicao do numero buscado
    else
    {
        cout << "Possui acesso" << endl;
    }

    return 0;
}