#include <iostream>

using namespace std;

int main()
{
    int X[1001]; // numero maximo e 100
    int N; // numero de numeros lidos
    int menor = 100; // indicador do menor numero, ele comeca alto
    int p; // indicador da posicao do menor numero

    cin >> N; // entrada para quantos numeros serao lidos

    for (int i = 0; i < N; i++) // for para ler N numeros
    {
        cin >> X[i]; // entrada de numeros no vetor

        if (X[i] < menor) //se o numero for o menor
        {
            menor = X[i]; // salva ele na variavel menor

            p = i; // e salva sua posicao
        }
    }
    
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << p << endl; // saida

    return 0;
}