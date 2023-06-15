#include<iostream>

using namespace std;

int main()
{
    char mat[10][10];
    int N,M; // Numero de linhas e colunas
    int i,j; // Contador de linha e coluna

    // Entrada de numeros de linhas e colunas
    cin >> N >> M;

    // Entrando a mensagem criptografada
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cin >> mat[i][j];
        }
        
    }
    
    // Inverte as linhas e colunas e imprime a mensagem descriptografada
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << mat[j][i];
        }
        
    }   
    
    cout << endl;

    return 0;
}