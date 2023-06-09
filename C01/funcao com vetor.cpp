#include <iostream>

using namespace std;

int soma(int v[], int tam)
{
    int s; // soma dos elementos de v
    int i; // contador

    s = 0;

    for (i = 0; i < tam; i++)
    {
        s += v[i];
    }

    return s;
}

int main()
{
    int v[5]; // armazena os dados
    int n;    // numero de elementos inseridos
    int i;    // contador
    int s;    // soma dos elementos

    cin >> n; // # elementos

    // Lendo dados e inserindo no vetor
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // soma dos elementos
    s = soma(v, n);

    // Mostrando soma
    cout << "soma = " << s << endl;

    return 0;
}