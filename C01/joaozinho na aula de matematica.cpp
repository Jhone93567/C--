#include <iostream>

using namespace std;

int main()
{
    int N; // numero a ser multiplicado
    int tabuada[1001]; // vetor para a tabuada

    cin >> N; // entrada
    
    for (int i = 0; i <= 10; i++) // repetir o comando 10 vezes
    {
        tabuada[i] = N*i; // logica para atribuir a tabuada

        cout << N << " x " << i << " = " << tabuada[i] << endl; // imprime a tabuada
    }
    

    return 0;
}