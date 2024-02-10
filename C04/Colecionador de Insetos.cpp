#include <iostream>
#include <string>

using namespace std;

// Struct que armazena o nome e o tamanho do inseto
struct inseto
{
    string nome;
    float tamanho;
};

// Funcao para cadastrar os insetos no vetor
void cadastro(inseto x[], int total)
{
    for (int i = 0; i < total; i++)
    {
        cin.ignore();
        cout << "Qual o nome do Inseto:" << endl;
        getline(cin, x[i].nome);
        cout << "Qual o tamanho dele:" << endl;
        cin >> x[i].tamanho;
    }

    return;
}

void BubbleSort(inseto vetor[], int tamanho) // RAM = 4 + n + n*(6n + 4) + 17n^2 = 23n^2 + 5n + 4, Complexidade big O = n^2
{
    // Declarando variaveis
    inseto x;
    int limite = tamanho - 1; // 3
    bool troca = true;        // 1

    // Enquanto houver um vetor fora de posicao, repete o bloco
    while (troca)
    {
        // Voltando troca para falso, para nao repetir o bloco caso nao ocorra nenhuma troca
        troca = false; // n

        // Encontrando elementos fora de posicao no vetor
        for (int i = 0; i < limite; i++) // n*(1 + 3(n + 1) + 3n)
        {
            // Se encontrar algum elemento maior que o proximo
            if (vetor[i].tamanho > vetor[i + 1].tamanho) // 6n^2
            {
                // Fazendo a troca e voltando a booleana troca para true
                x = vetor[i];            // 3n^2
                vetor[i] = vetor[i + 1]; // 4n^2
                vetor[i + 1] = x;        // 3n^2
                troca = true;            // n^2
            }
        }
    }
}

int main()
{
    // Declarando variaveis
    inseto grupo[20];
    int total;

    // Entrada do usuario
    cout << "Quantos insetos deseja registrar:" << endl;
    cin >> total;

    // Chamando a funcao de cadastro
    cadastro(grupo, total);

    // Usando o algoritmo de BubbleSort para ordenar os insetos por tamanho em ordem crescente
    BubbleSort(grupo, total);

    // Imprimindo os Insetos em ordem
    for (int i = 0; i < total; i++)
    {
        cout << grupo[i].nome << endl;
    }

    return 0;
}