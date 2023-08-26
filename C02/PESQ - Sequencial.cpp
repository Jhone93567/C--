#include <iostream>

using namespace std;

// funcao que faz uma busca sequencial em um vetor, atras de x
int busca(int vetor[], int x, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (vetor[i] == x)
        {
            return i;
        }
    }

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
        cout << aux << " nao encontrado" << endl;
    }
    // Se nao, retorna a posicao do numero buscado
    else
    {
        cout << aux << " encontrado na posicao " << busca(x, aux, n) << endl;
    }

    return 0;
}