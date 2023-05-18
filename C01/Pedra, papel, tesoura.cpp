#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int T; // numero de testes
    char p1[10]; // vetor para entrada da jogada 1
    char p2[10]; // vetor entrada jogada 2
    char jogada1[10]; // vetor a ser comparado jogada 1
    char jogada2[10]; // vetor a ser comparado jogada 2

    cin >> T; // entrada numero de testes
    cin.ignore(); // ignorar o enter do cin

    for (int i = 0; i < T; i++) // repetir o bloco T vezes
    {
        cin.getline(p1, 10); // entrada jogada 1
        cin.getline(p2, 10); // entrada jogada 2

        strcpy(jogada1, p1); // adiciona a jogada 1 ao vetor de comparacao
        strcpy(jogada2, p2); // adiciona a 2 ao vetor

        if (!strcmp(jogada1, jogada2))
        {
            cout << "Empate" << endl;
        }
        else if (!strcmp(jogada1, "papel"))
        {
            if (!strcmp(jogada2, "tesoura"))
            {
                cout << "Jogador B" << endl;
            }
            else if(!strcmp(jogada2,"pedra"))
            {
                cout << "Jogador A" << endl;
            }
        }
        else if (!strcmp(jogada1, "pedra"))
        {
            if (!strcmp(jogada2, "tesoura"))
            {
                cout << "Jogador A" << endl;
            }
            else if(!strcmp(jogada2,"papel"))
            {
                cout << "Jogador B" << endl;
            }
        }
        else if (!strcmp(jogada1, "tesoura"))
        {
            if (!strcmp(jogada2, "pedra"))
            {
                cout << "Jogador B" << endl;
            }
            else if(!strcmp(jogada2,"papel"))
            {
                cout << "Jogador A" << endl;
            }
        }
    }

    return 0;
}