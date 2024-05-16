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

bool Buscar(arvore *&main, int X) // Funcao que busca X, retornando true caso encontre e false caso ele nao exista na arvore
{
    while (main->dir != NULL && main->esq != NULL)
    {
        if (X == main->x)
        {
            return true;
        }

        if (X > main->x)
        {
            main = main->dir;
        }
        else
        {
            main = main->esq;
        }
    }

    return false;
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
    int n, x;            // Armazena o numero de modulos e qual o valor inserido
    arvore *main = NULL; // Node inicial da arvore

    cin >> n; // Entrada do numero de nodes

    for (int i = 0; i < n; i++) // Inserindo elementos na arvore
    {
        cin >> x;
        Inserir(main, x);
    }

    cin >> x; // Entrada do numero a ser buscado

    if (Buscar(main, x)) // Quando retornar true, imprime encontrado
    {
        cout << "Encontrado" << endl;
    }
    else // Senao, imprime nao encontrado
    {
        cout << "Nao encontrado" << endl;
    }

    Apagar(main); // Apaga a arvore para recuperar a memoria

    return 0;
}