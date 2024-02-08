#include<iostream>

using namespace std;

int vetor[9] = {1,2,3,4,5,6,7,8,9};

int busca_binaria(int elemento, int inicio, int fim)
{
int meio = (inicio + fim) / 2;

if (vetor[meio] == elemento)
    return meio;
if(elemento > vetor[meio])
{
    busca_binaria(elemento, meio + 1, fim);
}
else
{
    busca_binaria(elemento, inicio, meio - 1);
}


}

int main()
{


    return 0;
}