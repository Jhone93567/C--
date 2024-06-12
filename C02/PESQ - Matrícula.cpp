#include <iostream>
#include <string>

using namespace std;

// struct que armazenara o numero da matricula, o nome do aluno e a idade
struct aluno
{
    string nomes;
    string curso;
    int matricula;
};

// funcao que faz uma busca sequencial pelo nome do aluno
int busca(string nome, aluno alunos[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (alunos[i].nomes == nome) // se encontrar alguem no vetor com o nome buscado
        {
            return i; // retorna a posicao do aluno
        }
    }

    return -1; // retorna -1 pois nao encontrou o aluno
}

int main()
{
    int n;    // numero de alunos
    string m; // nome do aluno a ser buscado
    aluno alunos[10001]; // vetor do tipo aluno

    cin >> n; // entrada

    // Entrada de dados no vetor
    for (int i = 0; i < n; i++)
    {
        cin.ignore(); // ignore para ignorar o ENTER da entrada de n
        getline(cin,alunos[i].nomes); // Usando getline para atribuir o nome e sobrenome do aluno a string
        cin >> alunos[i].curso;
        cin >> alunos[i].matricula;
    }
    
    cin.ignore();
    getline(cin,m); // entrada do nome a ser buscado

    if (busca(m, alunos, n) == -1) // Se a funcao retornar -1, nao existe aluno com esse nome buscado
    {
        cout << "Aluno nao localizado" << endl;
    }
    else
    {
        // Imprime as informacoes do aluno buscado
        cout << m << endl;
        cout << alunos[busca(m, alunos, n)].curso << endl;
        cout << alunos[busca(m, alunos, n)].matricula << endl;
    }

    return 0;
}