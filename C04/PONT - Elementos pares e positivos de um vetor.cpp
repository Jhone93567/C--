#include <iostream>

using namespace std;

int main() {

    int n_elementos;
    cin >> n_elementos;

    int vetor[n_elementos];

    // inserir elementos
    for (int i = 0; i < n_elementos; i++)
    {
        cin >> vetor[i];
    }
    
    // encontrar quantidade de elementos pares positivos
    int q_encontrada = 0;
    int *p = vetor;
    for (int i = 0; i < n_elementos; i++)
    {
        if (*(p+i) % 2 == 0 && *(p+i) > 0) // elemento é par e positivo
        {
            q_encontrada++;
        }
    }
    
    // apresentar resultado
    cout << q_encontrada << endl;

    return 0;
}