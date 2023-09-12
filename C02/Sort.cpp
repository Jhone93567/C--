#include <iostream>

using namespace std;

void SimpleSort(int vetor[], int tamanho) //RAM = 4 + n + n*(6n + 4) + 17n^2 = 23n^2 + 5n + 4, Complexidade big O = n^2 
{
    int x;
    int limite = tamanho - 1; // 3
    bool troca = true; // 1

    while (troca) 
    {
        troca = false; // n

        for (int i = 0; i < limite; i++) // n*(1 + 3(n + 1) + 3n)
        {
            if (vetor[i] > vetor[i + 1]) // 6n^2
            {
                x = vetor[i]; // 3n^2
                vetor[i] = vetor[i + 1]; // 4n^2
                vetor[i + 1] = x; // 3n^2
                troca = true; // n^2
            }
        }
    }
}

int main() // Bubble sort tem a menor complexidade RAM do que o algoritmo feito em sala, porem ambos tem complexidade big O de n^2
{
    int n = 10;

    int vetor[100] = {3, 2, 7, 6, 34, 61, 32, 34, 13, 10};

    SimpleSort(vetor, n);

    for (int i = 0; i < n; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}