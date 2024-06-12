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
Nao e possivel, a busca bunaria tem como requisito um vetor organizado em ordem crescente, 
como o vetor que estamos fazendo a busca e de nomes, nao e possivel ordenalo em ordem crescente.
Outra alternativa seria a busca sequencial, ela usa mais processamento e memoria RAM mas consegue fazer a busca.*/
int busca(string nome, aluno alunos[], int n)
{
    int i; // contador do for

    for (i = 0; i < n; i++)
    {
        if (alunos[i].nomes == nome) // se encontrar alguem no vetor com o nome buscado
        {
            break; // sai do loop
        }
    }

    if (i == n) // caso ele nao encontre ninguem
    {
        i = -1; // atribui -1 ao i
    }

    return i; // retorna i
}

int main()
{
    int n; // numero de alunos
    string m; // nome do aluno a ser buscado

    cin >> n; // entrada

    aluno alunos[n]; // vetor do tipo aluno

    // Entrada de dados no vetor
    for (int i = 0; i < n; i++)
    {
        cin >> alunos[i].matricula;
        cin >> alunos[i].nomes;
        cin >> alunos[i].idade;
    }

    cin >> m; // entrada do nome a ser buscado

    if(busca(m, alunos, n) == -1) // Se a funcao retornar -1, nao existe aluno com esse nome buscado
    {
        cout << "Nome invalido" << endl;
    }
    else
    {
    // Imprime as informacoes do aluno buscado
    cout << "Matricula: " << alunos[busca(m, alunos, n)].matricula << endl;
    cout << "Idade: " << alunos[busca(m, alunos, n)].idade << endl;
    }

    return 0;
}