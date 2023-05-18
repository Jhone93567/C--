#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool p1[1000001]; // vetor que armazenara quais alunos estao presentes
    int N;            // quantos numeros serao inseridos
    int R = 0;        // contador para quantos numeros sao repetidos
    int indice;       // o numero de presena do aluno

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