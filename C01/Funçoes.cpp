#include<iostream>

using namespace std;

// retorna a + b
int soma(int a, int b)
{
    int s;
    s = a + b;
    return s;
}

int main()
{
    int x, y; // operandos
    int r; // resultado

    cin >> x >> y;

    r = soma(x,y);

    cout << "r = " << r << endl;

    return 0;
}