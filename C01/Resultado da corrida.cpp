#include <iostream>

using namespace std;

int main()
{
    float X;           // variavel de verificacao
    int C[1000];       // vetor com as colocacoes
    float tempo[1000]; // vetor com os tempos
    int i = 0;         // contador
    float menort = 100;
    int n_menort;

    cin >> X; // entrada do primeiro tempo

    while (X != -1) // enquanto nao ler um -1
    {
        tempo[i++] = X; // atribui X ao vetor de tempo

        cin >> X; // entrada do X para testar denovo
    }

    for (int c = 0; c < i; c++) // repetir o bloco o mesmo numero de tempos registrados
    {
        for (int n = 0; n < i; n++) // bloco para decobrir o menor tempo
        {
            if (tempo[n] < menort)
            {
                menort = tempo[n]; // atribui o menor tempo a variavel menort

                n_menort = n; // salva a posicao do menor tempo
            }
        }

        C[c] = n_menort; // atribui a posicao do menor tempo ao vetor

        tempo[n_menort] = 1000; // aumenta o menor valor para um numero grande, logo ele deixa de ser o menor valor

        menort = 900; // reseta a memoria de menor valor para um numero grande
    }

    cout << "Classificacao:" << endl; // imprime a saida

    for (int n = 0; n < i; n++)
    {
        cout << C[n] << endl;
    }

    return 0;
}