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

/* RESPOSTA DO QUESTAO 3:
Sim, e possivel mas a funcao deve estar ordenada, e como neste caso ela nao esta, segue abaixo uma funcao que 
faz o que esta sendo pedido, porem usando busca sequencial e um contador, sendo esta uma alternativa para quando
o vetor nao estives ordenado.*/
int busca(int idade, aluno alunos[], int n)
{
    int c = 0; // contador

    for (int i = 0; i < n; i++)
    {
        if (alunos[i].idade <= idade) // se o aluno tiver a idade igual ou menor que a comparada
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