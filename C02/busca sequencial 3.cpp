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

// funcao que recebe um numero e retorna quantos alunos possuem idade igual ou menor a esse numero
int busca(int idade, aluno alunos[], int n)
{
    int c = 0; // contador

    for (int i = 0; i < n; i++)
    {
        if (alunos[i].idade == idade || alunos[i].idade < idade) // se o aluno tiver a idade igual ou menor que a comparada
        {
            c++; // incrementa o contador
        }
    }

    return c; // retorna o numero de alunos que satisfazem a comparacao
}

int main()
{
    int n; // numero de alunos
    int m; // idade a ser comparada

    cin >> n; // entrada

    aluno alunos[n]; // vetor do tipo aluno

    // Entrada de dados no vetor
    for (int i = 0; i < n; i++)
    {
        cin >> alunos[i].matricula;
        cin >> alunos[i].nomes;
        cin >> alunos[i].idade;
    }

    cin >> m; // entrada da idade a ser comparada

    // Saida
    cout << "Numero de alunos com idade igual ou menor a " << m << ": " <<  busca(m, alunos, n) << endl;
    
    return 0;
}