#include<iostream>

using namespace std;

int busca(int vetor[],int x,int n)
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
    int x[101];
    int n = 0;
    int aux;

    cin >> aux;

    while (aux != -1)
    {
        x[n] = aux;

        n++;

        cin >> aux;
    }
    
    cin >> aux;

    if(busca (x,aux,n) == -1)
    {
        cout << aux << " nao encontrado" << endl;
    }
    else
    {
        cout << aux << " encontrado na posicao " << busca (x,aux,n) << endl;
    }

    return 0;
}