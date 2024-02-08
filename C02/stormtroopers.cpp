#include <iostream>

using namespace std;

struct stormtrooper
{
    int id;   // id do soldado
    float im; // im e fa do soldado, numero real entre 0 e 1
    float fa;
    float ga; // grau de aptidao do soldado, media entre seu im e fa
};

int main()
{
    int aux;   // auxiliar para o while
    int i = 0; // contador
    float maior = 0; // salva o maior ga
    int melhor; // salva o numero do melhor soldado
    stormtrooper stormtrooper[100];

    cin >> aux;

    while (aux != 0)
    {
        stormtrooper[i].id = aux;

        cin >> stormtrooper[i].im >> stormtrooper[i].fa;

        stormtrooper[i].ga = (stormtrooper[i].im + stormtrooper[i].fa) / 2;

        i++;

        cin >> aux;
    }

    for (int n = 0; n < i; n++)
    {
        if(stormtrooper[n].ga > maior)
        {
            maior = stormtrooper[n].ga;
            melhor = n;
        }
    }
    
    cout << "Stormtrooper escolhido: " << stormtrooper[melhor].id << endl;
    cout << "GA = " << stormtrooper[melhor].ga << endl;

    return 0;
}