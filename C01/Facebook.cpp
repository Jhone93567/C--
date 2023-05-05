#include <iostream>

using namespace std;

int main()
{
    int N; // Numero de usuarios
    int X[1000]; // vetor que armazenara ate 1000 usuarios
    int menorX = 1000; // recorde para o menor numero de usuarios, comeca alto
    int maiorX = 0; // recorde para o maior numero de usuarios, comeca baixo

    cin >> N; // entrada para quantos valores serao armazenados

    for (int i = 0; i < N; i++) // for para armazenar N valores
    {
        cin >> X[i]; // entrada para armazenar os valores

        if (X[i] < menorX) // se o valor atual for o menor
        {
            menorX = X[i]; // salva ele em uma variavel
        }
        if (X[i] > maiorX) // se o valor atual for o maior
        {
            maiorX = X[i]; // salva ele em uma variavel
        }
        
    }
    
    cout << "Menor numero de contatos: " << menorX << endl; // imprime o menor valor reistrado
    cout << "Maior numero de contatos: " << maiorX << endl; // imprime o maior valor reistrado

    return 0;
}