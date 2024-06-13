#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct ponto
{
    int x;
    int y;
};

float calcula_area (ponto a, ponto b, ponto c) // Funcao que calcula a area do triangulo
{
    return ((a.x*b.y - a.y*b.x + a.y*c.x - a.x*c.y + b.x*c.y - b.y*c.x) / 2);
}

int main()
{
    ponto x,y,z;

    cin >> x.x >> x.y >> y.x >> y.y >> z.x >> z.y;

    cout << fixed << setprecision(1) << calcula_area(x,y,z) << endl;

    return 0;
}