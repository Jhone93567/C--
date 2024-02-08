#include <iostream>

using namespace std;

int main ()
{
    float alturas [3];
    int maisAlto;
    float maiorAltura = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> alturas [i];
    }
    
     for (int i = 0; i < 3; i++)
     {
        if (alturas[i] > maiorAltura)
        {
            maiorAltura = alturas[i];

            maisAlto = i;
        }
     }

    cout << "A maior altura e: " << maiorAltura << endl;
    cout << "A pessoa mais alta e: " << maisAlto << endl;

    return 0;
}