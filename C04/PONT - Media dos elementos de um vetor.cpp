#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n_elementos;
    cin >> n_elementos;
    
    // declarar vetor
    int *vetor = new int[n_elementos];

    // ler valores
    for (int i = 0; i < n_elementos; i++)
    {
        cin >> *(vetor+i);
    }
    
    // calcular media
    float media = 0;
    for (int i = 0; i < n_elementos; i++)
    {
        media += *(vetor+i);
    }
    media /= n_elementos;
    
    // apresentar media
    cout << fixed << setprecision(2);
    cout << media << endl;
    
    // apagar vetor da memoria
    delete[] vetor;
    return 0;
}