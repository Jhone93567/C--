#include <iostream>

using namespace std;

void SimpleSort(int vetor[], int tamanho)
{
    int x;
    int limite = tamanho - 1;
    bool troca = true;

    while (troca)
    {
        troca = false;

        for (int i = 0; i < limite; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                x = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = x;
                troca = true;
            }
        }
    }
}

int main()
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