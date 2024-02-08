#include <iostream>

using namespace std;

float calc_delta(float a, float b, float c) // funcao que calcula o delta
{
    float d;

    d = (b * b) - (4 * a * c);

    return d;
}

int main()
{
    float a, b, c; // 3 numeros reais para a entrada

    cin >> a >> b >> c; // entrada

    cout << "delta = " << calc_delta(a, b, c) << endl; // imprime o resultado

    return 0;
}