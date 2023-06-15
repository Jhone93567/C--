#include <iostream>

using namespace std;

int main()
{
    int mat[10][10];
    int N, M; // Numero de linhas e colunas da matriz
    int i, j; // Contador de linhas e colunas

    cin >> N >> M;

    // Entrada de dados na matriz
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cin >> mat[i][j];
        }
    }

    // Imprime a matriz
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}