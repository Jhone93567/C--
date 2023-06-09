#include <iostream>

using namespace std;

float media(int notas[], int nAlunos) // funcao para calcular a media de notas do vetor notas com o tamanho nAlunos
{
    float media = 0;

    for (int i = 0; i < nAlunos; i++)
    {
        media += notas[i];
    }

    return media / nAlunos;
}

int main()
{
    int n;          // numero de notas a serem registradas
    int notas[200]; // vetor para armaenar as notas

    cin >> n; // entrada de n

    for (int i = 0; i < n; i++) // repetir n vezes
    {
        cin >> notas[i]; // entrada das n notas
    }

    // imprime a resposta com 2 casas decimais
    cout << fixed;
    cout.precision(2);

    cout << "Media da turma = " << media(notas, n) << endl; // imprime a media da turma

    return 0;
}