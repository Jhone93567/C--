#include <iostream>
#include <string>

using namespace std;

// Struct que armazena o nome e a quantidade de um produto
struct produto
{
    string nome;
    int quant;
};

// Funcao que cadastra o nome e a quantidade de um produto
void cadastro (produto x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Qual o nome do produto:" << endl;
        getline(cin,x[i].nome);
        cout << "Quantos desse produto ha no estoque?" << endl;
        cin >> x[i].quant;
    } 
    return;
}

// Funcao que recebe o nome de um produto e retorna true caso ele exista no vetor estoque
bool busca(string busca, produto x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (x[i].nome == busca) // Se existir alguem no vetor com o nome buscado
        {
            return true; // Retorna verdadeiro
        }
    }

    return false; // Retorna falso
}

int main()
{
    // Declarando variaveis
    produto estoque[20];
    int total;
    string buscando;

    // Entrada
    cout << "Quantos produtos serao registrados:" << endl;
    cin >> total;

    // Chama a funcao de cadastro
    cadastro(estoque,total);

    // Perguntando o que o usuario deseja buscar
    cin.ignore();
    cout << "O que deseja buscar?" << endl;
    getline(cin,buscando);

    // Chama a funcao de busca sequencial
    if(busca(buscando,estoque,total))
    {
        cout << buscando << " em estoque!" << endl;
    }
    else
    {
        cout << "Nao existe " << buscando << " em estoque!" << endl;
    }

    return 0;
}