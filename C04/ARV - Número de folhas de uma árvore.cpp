#include <iostream>

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

int contaFolhas(arvore *main) // Funcao recursiva que conta quantas folhas tem na arvore
{
    if (main == NULL)
    {
        return 0;
    }
    else if (main->dir == NULL && main->esq == NULL)
    {
        return 1;
    }

    return (contaFolhas(main->esq) + contaFolhas(main->dir));
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

    cout << contaFolhas(main);

    cout << endl; // Imprime uma quebra de linha

    Apagar(main); // Apaga a arvore para recuperar a memoria

    return 0;
}