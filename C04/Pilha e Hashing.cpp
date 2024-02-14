#include <iostream>
#include <list>

using namespace std;

int hash_aux(int k, int m) // h1(k)
{
    return k % m;
}

int hash_aux2(int k, int m) // h2(k)
{
    return 1 + (k % (m - 1));
}

int hash_duplo(int k, int m, int i) // Funcao de hash duplo: (h1(k) + i h2(k)) mod m
{
    return (hash_aux(k, m) + i * hash_aux2(k, m)) % m;
}

int main()
{
    // Declarando variaveis
    list<int> pilha; // Uma pilha de inteiros que armazenara as variaveis
    int m;           // O valor de M usando no hashing
    int n;           // O numero de variaveis a serem inseridas
    int x;           // Variavel auxiliar
    int pos;         // Posicao que a variavel sera inserida
    int hashing[20]; // Vetor que armazenara a tabela hashing

    cin >> m >> n; // Entrada

    for (int i = 0; i < n; i++) // Inserindo n elementos na pilha
    {
        cin >> x;
        pilha.push_back(x);
    }

    for (int i = 0; i < m; i++) // Atribuindo -1 a todas as posicoes do vetor
    {
        hashing[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        // Salvando o valor em cima da pilha em X e removendo ele da pilha
        x = pilha.back();
        pilha.pop_back();

        // Aplicando hash duplo
        for (int y = 0; y < m; y++)
        {
            pos = hash_duplo(x, m, y);
            if (hashing[pos] == -1)
            {
                hashing[pos] = x;
                break; // Lembrar que break sai da estrutura de repeticao apenas 1 vez
            }
        }
    }

    // Imprimindo a tabela final
    for (int i = 0; i < m; i++)
    {
        cout << hashing[i] << " ";
    }
    cout << endl;

    return 0;
}