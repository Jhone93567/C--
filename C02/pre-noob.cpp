#include <iostream>

using namespace std;

struct boletim // struct que armazenara os dados do boletim do aluno
{
    int matricula; // matricula do aluno
    float n1;      // nota na primeira prova
    float n2;      // nota na segunda prova
};

int main()
{
    boletim aluno; // struct do boletim com o nome aluno

    cin >> aluno.matricula >> aluno.n1 >> aluno.n2; // entrada dos dados

    cout << fixed; // imprime os numeros reais com 2 casas depois da virgula
    cout.precision(2);

    cout << "Matricula do aluno: " << aluno.matricula << endl; // imprime os dados
    cout << "Nota da primeira prova: " << aluno.n1 << endl;
    cout << "Nota da segunda prova: " << aluno.n2 << endl;

    return 0;
}