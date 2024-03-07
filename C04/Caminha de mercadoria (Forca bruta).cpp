#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    int volume;
    int caixaA = 20;
    int caixaB = 3;
    int caixaC = 4;
    int contadorA = 0;
    int contadorB = 0;
    int contadorC = 0;
    int total = 0;
    int precoA = 200;
    int precoB = 150;
    int precoC = 100;

    cin >> x >> y >> z;

    volume = x * y * z;

    while (volume >= 3 || contadorA < 10)
    {
        if (contadorB == 20 && contadorC == 25)
        {
            volume -= caixaA;
            contadorA++;
            total += precoA;
        }
        else if (contadorB == 20)
        {
            volume -= caixaB;
            contadorC++;
            total += precoB;
        }
        else
        {
            contadorB++;
            volume -= caixaC;
            total += precoC;
        }
    }

    cout << "Caixa A: " << contadorA << endl;
    cout << "Caixa B: " << contadorB << endl;
    cout << "Caixa C: " << contadorC << endl;
    cout << "Valor da carga: " << total << endl;

    return 0;
}