#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;          // numero de alunos
    char nome[100]; // string para o nome dos alunos
    int nota[5];    // vetor para armazenar as notas

    cin >> N; // entrada de quantos alunos serao avaliados

    cout << fixed;
    cout.precision(2);

    for (int i = 0; i < N; i++) // bloco que repetira N vezes
    {
        cin.ignore(); // ignorar o enter do cin N
        cin.getline(nome, 100); // entrada do nome
        cin >> nota[1] >> nota[2] >> nota[3] >> nota[4]; // entrada da nota do aluno

        cout << nome << ": " << (nota[1] + 2*nota[2] + 3*nota[3] + 4*nota[4])/(float)10 << endl;
    }

    return 0;
}