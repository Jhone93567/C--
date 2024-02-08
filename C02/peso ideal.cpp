#include <iostream>

using namespace std;

float ideal(float h, char sexo) // Calcula o peso ideal
{
    float r; // Resposta

    if (sexo == 'M') // Se for homem
    {
        r = 72.7 * h - 58;
    }
    else if (sexo == 'F') // Se for mulher
    {
        r = 62.1 * h - 44.7;
    }

    return r; // Retorna a resposta
}

int main()
{
    float A; // Altura
    char S;  // Armazena o sexo

    cin >> A >> S; // Entrada

    // Imprimir com 2 casas depois da virgula
    cout << fixed;
    cout.precision(2);

    // Saida
    cout << "Peso ideal = " << ideal(A, S) << " kg" << endl;

    return 0;
}