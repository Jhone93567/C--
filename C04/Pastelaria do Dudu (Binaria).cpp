#include <iostream>
#include <string>

using namespace std;

// Struct que armazena o nome e a quantidade de um produto
struct produto
{
    int codigo;
    string nome;
    int quant;
};

// Funcao que cadastra o nome e a quantidade de um produto
void cadastro (produto x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Qual o codigo do produto:" << endl;
        cin >> x[i].codigo;
        cin.ignore();
        cout << "Qual o nome do produto:" << endl;
        getline(cin,x[i].nome);
        cout << "Quantos desse produto ha no estoque?" << endl;
        cin >> x[i].quant;
    } 
    return;
}

// Funcao de busca binaria que retorna a posicao do produto buscado no vetor ou -1 caso ele nao exista
int busca(int busca, produto estoque[], int n)
{
    int i = 0;
    n -= 1;
    int p;

    do    
    {
        p = (i + n) / 2;

        if (estoque[p].codigo == busca)
        {
            return p;
        }
        else if (estoque[p].codigo < busca)
        {
            i = p + 1;
        }
        else if (estoque[p].codigo > busca)
        {
            n = p - 1;
        }
    }
    while (i <= n);

    if (i > n)
    {
    return -1;
    }
    else
    {
    return p;
    }
}

int main()
{
    // Declarando variaveis
    produto estoque[20];
    int total;
    int buscando;

    // Entrada
    cout << "Quantos produtos serao registrados:" << endl;
    cin >> total;

    // Chama a funcao de cadastro
    cadastro(estoque,total);

    // Perguntando o que o usuario deseja buscar
    cout << "O que deseja buscar?" << endl;
    cin >> buscando;

    // Chama a funcao de busca sequencial
    if(busca(buscando,estoque,total) > 0)
    {
        cout << estoque[busca(buscando,estoque,total)].nome << " em estoque!" << endl;
    }
    else
    {
        cout << "Nao existem produtos com esse codigo em estoque!" << endl;
    }

    return 0;
}