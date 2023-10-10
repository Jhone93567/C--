#include <iostream>

using namespace std;

void swap(int vetor[], int i, int j)
{
    int temp = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = temp;
}

int particiona(int vetor[], int inicio, int fim)
{
    int pivo = vetor[fim];
    int i = 0, j = fim - 1;
    while (i < j)
    {
        while (vetor[i] < pivo && i < j)
        {
            i++;
        }
        while (vetor[j] > pivo && i < j)
        {
            j--;
        }
        swap(vetor, i, j);
    }
    if (vetor[i] > pivo)
    {
        swap(vetor, i, fim);
    }
    return i;
}
void quicksort(int vetor[], int inicio, int fim)
{
    if (inicio < fim)
    {
        // fazer a ordenacao em relacao ao pivo
        int pivo = particiona(vetor, inicio, fim);
        // chamar o quicksort para a metade inferior
        quicksort(vetor, inicio, pivo - 1);
        // chamar o quicksort para a metade superior
        quicksort(vetor, pivo + 1, fim);
    }
}

int main()
{
    int vetor[9] = {2, 6, 4, 8, 3, 7, 5, 1, 9};

    quicksort(vetor, 0, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}