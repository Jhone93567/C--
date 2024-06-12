#include <iostream>
#include <iomanip>

using namespace std;

struct arvore // Struct pra arvore binaria, ela possui o valor do node, e um ponteiro para cada lado
{
    int x;
    arvore *esq;
    arvore *dir;
};

void Inserir(arvore *&main, int x) // Funcao recursiva para inserir novos elementos na arvore, inserindo elementos maiores que o central na direita e menores na esquerda
{
    if (main == NULL)
    {
        main = new arvore;
        main->x = x;
        main->dir = NULL;
        main->esq = NULL;
    }
    else
    {
        if (x >= main->x)
        {
            Inserir(main->dir, x);
        }
        else
        {
            Inserir(main->esq, x);
        }
    }
}

void varredura(arvore *main) // Funcao recursiva que varre e imprime a arvore em ordem decrescente
{
    if (main != NULL)
    {
        varredura(main->dir);
        cout << main->x << " ";
        varredura(main->esq);
    }
}

void Apagar(arvore *&main) // Funcao para apagar a arvore, pois ela usa memoria dinamica
{
    if (main->esq != NULL)
    {
        Apagar(main->esq);
    }
    if (main->dir != NULL)
    {
        Apagar(main->dir);
    }
    delete main;
}

int main()
{
    int x;               // Armazena o valor inserido
    arvore *main = NULL; // Node inicial da arvore

    while (cin >> x && x != -1) // Inserindo elementos na arvore ate receber -1
    {
        Inserir(main, x);
    }

    varredura(main); // Imprimindo a arvode em ordem dec.

    cout << endl; // Imprime uma quebra de linha

    Apagar(main); // Apaga a arvore para recuperar a memoria

    return 0;
}