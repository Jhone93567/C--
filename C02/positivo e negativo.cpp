#include <iostream>

using namespace std;

int sinal(int n) // funçao par testar se um numero e positivo, negativo ou igual a 0
{
    if (n > 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x; // Numero a ser testado

    cin >> x; // entrada

    // de acordo com o valor retornado imprime uma resposta diferente
    if (sinal(x) == 1)
        cout << "Positivo" << endl;
    else if (sinal(x) == 0)
        cout << "Zero" << endl;
    else
        cout << "Negativo" << endl;

    return 0;
}