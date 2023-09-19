#include <iostream>

using namespace std;

void SelectionSort(int vetor[], int tamanho)
{
    // Criando variaveis para encontrar o menor valor, salvar sua posicao e auxiliar para fazer a troca
    int min = 999999;
    int p_min;
    int aux;

    // Repetiremos a ordenacao para cada numero de elementos no vetor
    for (int n = 0; n < tamanho; n++)
    {
        // Encontrando o elemento de menor e valor e salvando seu valor e posicao
        for (int i = n; i < tamanho; i++)
        {
            if (vetor[i] < min)
            {
                min = vetor[i];
                p_min = i;
            }
        }
        // Fazendo a troca e resetanvo o valor de min
        aux = vetor[n];
        vetor[n] = min;
        vetor[p_min] = aux;
        min = 999999;
    }
}

void BubbleSort(int vetor[], int tamanho) // RAM = 4 + n + n*(6n + 4) + 17n^2 = 23n^2 + 5n + 4, Complexidade big O = n^2
{
    // Declarando variaveis
    int x;
    int limite = tamanho - 1; // 3
    bool troca = true;        // 1

    // Enquanto houver um vetor fora de posicao, repete o bloco
    while (troca)
    {
        // Voltando troca para falso, para nao repetir o bloco caso nao ocorra nenhuma troca
        troca = false; // n

        // Encontrando elementos fora de posicao no vetor
        for (int i = 0; i < limite; i++) // n*(1 + 3(n + 1) + 3n)
        {
            // Se encontrar algum elemento maior que o proximo
            if (vetor[i] > vetor[i + 1]) // 6n^2
            {
                // Fazendo a troca e voltando a booleana troca para true
                x = vetor[i];            // 3n^2
                vetor[i] = vetor[i + 1]; // 4n^2
                vetor[i + 1] = x;        // 3n^2
                troca = true;            // n^2
            }
        }
    }
}

void InsertionSort(int Vetor[], int tamanho) // big O = N^2 / RAM = 7,5n^2 + 8,5n -12
{
    int i, j; // contadores
    int chave;

    for (j = 1; j < tamanho; j++) // 1 + 6(n-1)
    {
        chave = Vetor[j]; // 3(n-1)
        i = j - 1; // 3(n-1)
        while ((i >= 0) && (Vetor[i] > chave)) // 7(n-1) * (n/2)[n/2 e a media aritmetica do numero de vezes que o vetor vai ser executado no pior caso]
        {
            Vetor[i + 1] = Vetor[i]; // 5(n-1)(n/2)
            i--;// 3(n-1)(n/2)
        }
        Vetor[i + 1] = chave; //4(n-1)
    }
}

int main() // Bubble sort tem a menor complexidade RAM do que o algoritmo feito em sala, porem ambos tem complexidade big O de n^2
{
    int n = 10;

    int vetor[100] = {3, 2, 7, 6, 35, 61, 32, 34, 13, 10};

    InsertionSort(vetor, n);

    for (int i = 0; i < n; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}