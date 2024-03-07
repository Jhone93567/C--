#include <iostream>

using namespace std;

int main()
{
    // Declarando variaveis
    int n, y, total;
    total = 0;
    int x = 0;
    int caminhos[10][10];
    int menor;

    // Atribuindo 100 para todos os elementos da matriz
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            caminhos[i][j] = 100;
        }
    }

    // Ebtrada do numero de caminhos percorridos
    cin >> y;

    // Igualando y a n e atribuindo 100 a variavel que armazena o menor valor
    n = y;
    menor = 100;

    // Subtrai 1 de N
    n--;

    // Entrada do usuario
    while (n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> caminhos[x][i];
        }

        x++;
        n--;
    }

    // Subtrai 1 de Y
    y--;

    // Faz uma busca sequencial no menor valor da matriz em cada coluna
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (caminhos[i][j] < menor)
            {
                menor = caminhos[i][j]; // Encontra o menor valor da coluna e salva numa variavel
            }
        }
        total += menor; //Adiciona o valor do menor no total
        cout << menor << endl; // Imprime qual o menor caminho que sera tomado
        menor = 100; // Atribui um numero alto a variavel menor novamente
    }

    cout << "Menor custo: " << total << endl; // Imprime o valor total

    return 0;
}