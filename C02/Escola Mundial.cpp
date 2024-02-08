#include <iostream>

using namespace std;

int main()
{
    int N; // contador de quantas notas serao lidas
    float media = 0; // media da turma
    int maiormedia = 0; // contador para o numero de alunos acima da media
    int menormedia = 0; // contador para o numero de alunos abaixo da media
    float notas[1000]; // vetor que armazenara 1000 notas

    cin >> N; // entrada de quantas notas serao lidas

    for (int i = 0; i < N; i++) // for para armazenar N notas
    {
        cin >> notas[i]; // entrada das notas

        media += notas[i]; // soma a nota atual com a media, que é a soma de todas as notas

    }
    
    media = media / N; // calculo de media aritmetica
    
    for (int i = 0; i < N; i++) // for para ler cada nota armazenada
    {
        if (notas[i] > media) // se a nota estiver acima da media
        {
            maiormedia++; // +1 para o contador de alunos acima da media
        }
        else if (notas[i] < media) // se a nota estiver abaixo da media
        {
            menormedia++; // +1 para o contador de alunos abaixo da media
        }       
    }

    cout << fixed;
    cout.precision(2); // imprime com 2 casas apos a virgula

    cout << "Media da turma: " << media << endl; // imprime a media da turma
    cout << "Alunos com nota acima da media: " << maiormedia << endl; // imprime a quantidade de alunos acima da media
    cout << "Alunos com nota abaixo da media: " << menormedia << endl; // imprime a quantidade de alunos abaixo da media

    return 0;
}