#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> pilha; // Lista no formato de pilha
    int X; // Entrada
    int N = 4; // Numero de elementos na pilha

    // Inserindo elementos na lista

    for (int i = 0; i < N; i++)
    {
        cin >> X;
        pilha.push_back(X);
    }

    // Imprimindo e removendo elementos do topo da Pilha
    
    for (int i = 0; i < N; i++)
    {
        cout << pilha.back() << endl;
        pilha.pop_back();
    }

    return 0;
}