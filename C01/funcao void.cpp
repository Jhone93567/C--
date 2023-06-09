#include <iostream>

using namespace std;

void soma(int v[], int tam, int &s, int &s2)
{
    int i; // contador

    s = 0;

    for (i = 0; i < tam; i++)
    {
        s += v[i];
        s2 *= v[i];
    }
}

int main()
{
    int v[5];  // armazena os dados
    int n;     // numero de elementos inseridos
    int i;     // contador
    int s = 0; // soma dos elementos
    int p;     // produto dos elementos

    cin >> n; // # elementos

    // Lendo dados e inserindo no vetor
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // soma dos elementos
    soma(v, n, s, p);

    // Mostrando soma
    cout << "soma = " << s << endl;

    return 0;
}