#include <iostream>

using namespace std;

struct notas
{
    float nota1, nota2, nota3, nota4;
    float media;
};

int main()
{
    notas *p;
    int nota;

    p = new notas;

    cin >> p->nota1;
    cin >> p->nota2;
    cin >> p->nota3;
    cin >> p->nota4;

    p->media = (p->nota1 + p->nota2 + p->nota3 + p->nota4) / 4;

    cout << p->media << endl;

    delete p;

    return 0;
}