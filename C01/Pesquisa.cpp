#include <iostream>

using namespace std;

int main()
{
    int X[100]; // vetor com 100 casas
    int i = 0; // contador
    int P; // numero a ser pesquisado

    do // executar o bloco
    {
        cin >> X[i]; // registra um numero

        if (X[i] == 0 || i == 100) // se o numero registrado for 0 chegar a 100 numeros registrados
        {
            break; // termina o bloco
        }
        else // caso contrario
        {
            i++; // parte para o proximo numero
        }
    }
    while(true); // enquanto o bloco nao for quebrado, ira se repetir

    cin >> P; // entrada do numero a ser pesquisado

    for ( i = 0; X[i] != 0; i++) // ler todos os numeros registrados ate o 0
    {
        if (X[i] == P) // se ele ler o numero pesquisado
        {
            cout << "Elemento " << P << " encontrado na posicao " << i << endl; // imprime a posicao do numero pesquisado

            break; // e termina o bloco
        }
        else if (X[i + 1] == 0) // caso contrario, se o proximo numero a ser lido for 0
        {
            cout << "Elemento " << P << " nao foi encontrado" << endl; // imprime que o numero pesquisado nao foi encontrado
        }      
    }

    return 0;
}