#include <iostream>

using namespace std;

int main()
{
    int n_elementos;
    cin >> n_elementos;

    int vetor[n_elementos];
    int *p;

    // ler valores
    p = vetor;
    for (int i = 0; i < n_elementos; i++)
    {
        // cin >> *(p+i);
        cin >> *(p+i);
    }

    // mostrar valores
    p = vetor;
    for (int i = 0; i < n_elementos; i++)
    {
        cout << *(p+i) << " ";
    }

    return 0;
}