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

int nAbaixo(int notas[], int nAlunos, float media)
{
    int n = 0;

    for (int i = 0; i < nAlunos; i++)
    {
        if (notas[i] < media)
        {
            n++;
        }
    }
    
    return n;
}

int nAcima(int notas[], int nAlunos, float media)
{
    int n = 0;

    for (int i = 0; i < nAlunos; i++)
    {
        if (notas[i] > media)
        {
            n++;
        }
    }
    
    return n;
}

int main()
{
    int n;          // numero de notas a serem registradas
    int notas[200]; // vetor para armaenar as notas
    float m;        // media da turma
    int am;         // numero de alunos abaixo da media
    int mm;         // numero de alunos com nota maior que a media

    cin >> n; // entrada de n

    for (int i = 0; i < n; i++) // repetir n vezes
    {
        cin >> notas[i]; // entrada das n notas
    }

    m = media(notas, n);
    am = nAbaixo(notas,n,m);
    mm = nAcima(notas,n,m);

    // imprime a resposta com 2 casas decimais
    cout << fixed;
    cout.precision(2);

    // Saida
    cout << "Media da turma = " << m << endl;
    cout << "Alunos com nota abaixo da media: " << am << endl;
    cout << "Alunos com nota acima da media: " << mm << endl;

    return 0;
}