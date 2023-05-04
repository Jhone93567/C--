#include <iostream>

using namespace std;

int main()
{
    int notas[3];
    float media;
    int soma = 0;
    int i;

    for (i = 0; i < 3; i++)
    {
        cin >> notas[i];
    }

    for ( i = 0; i < 3; i++)
    {
        soma += notas[i];
    }

    media = (float)soma / 3;

    cout << "Media = " << media << endl;    

    return 0;
}