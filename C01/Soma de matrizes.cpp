#include <iostream>

using namespace std;

int main()
{
    int mat1[10][10];
    int mat2[10][10];
    int mat3[10][10];
    int N, M; // Numero de linhas e colunas da matriz
    int i, j; // Contador de linhas e colunas

// Entrada numero de linhas e colunas
    cin >> N >> M;

    // Entrada de dados nas matrizes 1 e 2
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cin >> mat1[i][j];
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cin >> mat2[i][j];
        }
    }

    // Soma as matrizes 1 e 2 e salva o resultado na 3
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Imprime a matriz 3
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}