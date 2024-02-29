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

    cin >> x >> y >> z;

    volume = x * y * z;

    while (volume >= 3 || contadorA < 10)
    {
        if (contadorB == 20 && contadorC == 25)
        {
            volume -= 20;
            contadorA++;
        }
        else if (contadorB == 20)
        {
            volume -= 4;
            contadorC++;
        }
        else
        {
            contadorB++;
            volume -= 3;
        }
    }

    cout << "Caixa A: " << contadorA << endl;
    cout << "Caixa B: " << contadorB << endl;
    cout << "Caixa C: " << contadorC << endl;

    return 0;
}