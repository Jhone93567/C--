#include <iostream>

using namespace std;

// Struct que armazena as notas e a media de um aluno
struct notas
{
    float nota1, nota2, nota3, nota4;
    float media;
};

int main()
{
    // Ponteiro que aponta para a struct notas
    notas *p;

    // Alocando memoria para a variavel notas   
    p = new notas;

    // Entrada das notas, usando -> para quando um ponteiro aponta para uma struct
    cin >> p->nota1;
    cin >> p->nota2;
    cin >> p->nota3;
    cin >> p->nota4;

    // Calcula a media do aluno
    p->media = (p->nota1 + p->nota2 + p->nota3 + p->nota4) / 4;

    // Imprime a media
    cout << p->media << endl;

    // Delete para desalocar a memoria
    delete p;

    return 0;
}