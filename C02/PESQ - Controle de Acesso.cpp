#include<iostream>

using namespace std;

int busca(int vetor[],int x,int n)
{
    int i = 0;
    int meio;

    do
    {
        meio = (i + (n-1)) / 2;

        
    } while (i <= n);
    

    return -1;
}

int main()
{
    int x[21];
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
        cout << "Nao possui acesso" << endl;
    }
    else
    {
        cout << "Possui acesso" << busca (x,aux,n) << endl;
    }

    return 0;
}