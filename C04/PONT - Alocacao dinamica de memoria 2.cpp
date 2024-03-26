
#include <iostream>
#include <iomanip>

using namespace std;

const int N_NOTAS = 4;

struct dados
{
    int notas[N_NOTAS];
    float media;
};

void ler_notas(dados *aluno);
void calcular_media(dados *aluno);

int main()
{
    int n_alunos;
    cin >> n_alunos;

    // vetor de alunos
    dados *alunos = new dados[n_alunos];
    // inicializar medias
    for (int i = 0; i < n_alunos; i++)
    {
        alunos[i].media = 0;
    }
    
    // ler notas dos alunos
    for (int i = 0; i < n_alunos; i++)
    {
        // ler notas de um aluno
        ler_notas(&alunos[i]);
    }    
    

    //  calcular medias dos alunos
    for (int i = 0; i < n_alunos; i++)
    {
        // calcular media de um aluno
        calcular_media(&alunos[i]);
    }

    // calcular media das medias   
    float media = 0;
    for (int i = 0; i < n_alunos; i++)
    {
        media += alunos[i].media;
    }
    media /= n_alunos;
    
    // apresentar resultado
    cout << fixed << setprecision(2);
    cout << media << endl;

    delete[] alunos;
    return 0;
}

void ler_notas(dados *aluno)
{
    for (int i = 0; i < N_NOTAS; i++)
    {
        cin >> aluno->notas[i];
    }
}

void calcular_media(dados *aluno)
{
    for (int i = 0; i < N_NOTAS; i++)
    {
        aluno->media += aluno->notas[i];
    }
    aluno->media /= N_NOTAS;
}