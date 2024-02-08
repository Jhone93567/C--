#include <iostream>
#include <string>

using namespace std;

// struct que armazenara o numero da matricula, o nome do aluno e a idade
struct aluno
{
    int matricula;
    string nomes;
    int idade;
};

// funcao que recebe o numero da matricula de um aluno e retorna suas informacoes
int busca(int matricula, aluno alunos[], int n)
{
    int i; // contador do for

    for (i = 0; i < n; i++)
    {
        if (alunos[i].matricula == matricula) // se existir alguem no vetor com a matricula buscada
        {
            break; // sai do loop
        }
    }

    if (i == n) // se nao encontrar ninguem com a matricula buscada
    {
        i = -1; // atribui -1 a i
    }

    return i; // retorna i
}

int main()
{
    int n; // numero de alunos
    int m; // numero da matricula a ser buscado

    cin >> n; // entrada

    aluno alunos[n]; // vetor do tipo aluno

    // Entrada de dados no vetor
    for (int i = 0; i < n; i++)
    {
        cin >> alunos[i].matricula;
        cin >> alunos[i].nomes;
        cin >> alunos[i].idade;
    }

    cin >> m; // entrada do numero a ser buscado

    if(busca(m, alunos, n) == -1) // Se a funcao retornar -1, nao existe aluno com a matricula buscada
    {
        cout << "Numero de matricula invalido" << endl;
    }
    else
    {
    // Imprime as informacoes do aluno buscado
    cout << "Nome: " << alunos[busca(m, alunos, n)].nomes << endl;
    cout << "Idade: " << alunos[busca(m, alunos, n)].idade << endl;
    }

    return 0;
}