#include<iostream>

using namespace std;

int main()
{
    int lm,lM,cerca,area_maior,x,y;

    cin >> cerca;

    lm = 1;
    x = 1;
    y = 1;
    lM = cerca - 2;

    area_maior = 0;

    while(lm * lM > area_maior)
    {
        x = lm;
        y = lM;
        area_maior = lm*lM;
        lm++;
        lM -= 2;
    }

    cout << x << " x " << y << endl;

    return 0;
}