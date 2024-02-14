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

/* RESPOSTA DO QUESTAO 1:
Sim, e possivel. Abaixo tem uma funcao que recebe o numero da matricula de um aluno e retorna
suas informacoes usando busca binaria, provando que e possivel.*/
int busca(int matricula, aluno alunos[], int n)
{
    int i = 0;
    n -= 1;
    int p;

    do    
    {
        p = (i + n) / 2;

        if (alunos[p].matricula == matricula)
        {
            return p;
        }
        else if (alunos[p].matricula < matricula)
        {
            i = p + 1;
        }
        else if (alunos[p].matricula > matricula)
        {
            n = p - 1;
        }
    }
    while (i <= n);

    if (i > n)
    {
    return -1;
    }
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