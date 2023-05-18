#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool p1[1000001]; // vetor que armazenara o numero de presenca dos alunos
    int N;            // quantos numeros serao inseridos
    int R = 0;        // contador para quantos numeros sao repetidos
    int indice;

    cin >> N; // entrada

    for (int i = 0; i <= 1000001; i++)
    {
        p1[i] = false;
    }

    for (int i = 0; i < N; i++)
    {
        cin >> indice;

        if (!p1[indice])
        {
            R++;
        }

        p1[indice] = true;
    }

    cout << R << endl;

    return 0;
}