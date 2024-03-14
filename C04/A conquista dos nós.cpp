#include<iostream>

using namespace std;

int main()
{
    // Declarando variaveis: numero de cidades, numero de estradas, entrada cidade1, entrada cidade 2
    int m,n,x,y;

    // Entrada do numero de cidades e caminhos
    cin >> n >> m;

    // Criando a matriz para servir de grafo
    int nos[n][n];

    // Colocando todos os valores da matri em 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            nos[i][j] = 0;
        }
        
    }
    
    // Recebendo o numero das cidades que devem ser conectadas e colocano 1 na posicao delas
    for (int i = 0; i < m; m++)
    {
        cin >> x >> y;
        nos[x-1][y-1] = 1;
        nos[y-1][x-1] = 1;
    }

    // Imprime a matriz
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << nos[i][j] << " ";
        }
        cout << endl;
    }
     
    cout << endl;

    return 0;
}