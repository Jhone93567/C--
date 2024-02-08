#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> pilha; // Lista no formato de fila
    int X; // Entrada
    int N = 4; // Numero de elementos na fila

    // Inserindo elementos na lista

    for (int i = 0; i < N; i++)
    {
        cin >> X;
        pilha.push_back(X);
    }

    // Imprimindo e removendo elementos do final da fila
    
    for (int i = 0; i < N; i++)
    {
        cout << pilha.front() << endl;
        pilha.pop_front();
    }

    return 0;
}