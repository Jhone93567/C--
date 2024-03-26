#include <iostream>

using namespace std;

int main()
{
    int n_elementos;
    cin >> n_elementos;

    int vetor[n_elementos];

    // ler valores
    for (int i = 0; i < n_elementos; i++)   
    {
        cin >> vetor[i];
    }
    
    // procurando maior elemento no vetor
    int *p;
    int maior = -1 * __INT_MAX__;
    p = vetor;
    for (int i = 0; i < n_elementos; i++)
    {
        if (*(p+i) > maior)
        {
            maior = *(p+i);
        }
    }
    
    // apresentar resultado
    cout << maior << endl;
    
    return 0;
}