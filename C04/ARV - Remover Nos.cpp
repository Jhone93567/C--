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

arvore* ApontaMenor(arvore* &main, arvore* &aux1)
{
    arvore* aux = main;

    if (main->esq == NULL)
    {
        return aux;
    }
    else
    {
        if (aux1->dir == main)
        {
            aux1 = aux1->dir;
        }
        else
        {
            aux1 = aux1->esq;
        }
        
        return ApontaMenor(main->esq, aux1);
    }
    
}

void Remover(arvore* &main, int X) // Funcao que busca X e remove ele da arvore
{
    arvore *aux1, *aux2;

    while (X != main->x && (main->dir != NULL || main->esq != NULL))
    {
        if (X > main->x)
        {
            aux1 = main;
            main = main->dir;
        }
        else
        {
            aux1 = main;
            main = main->esq;
        }
    }

    if (X == main->x)
    {
        if (main->dir == NULL && main->esq == NULL)
        {
            if (aux1->dir == main)
            {
                aux1->dir = NULL;
                delete main;
            }
            else
            {
                aux1->esq = NULL;
                delete main;
            }
        }
        else if ((main->dir != NULL && main->esq == NULL) || (main->dir == NULL && main->esq != NULL))
        {
            if(main->dir != NULL)
            {
                aux2 = main->dir;
            }
            else
            {
                aux2 = main->esq;
            }

            if (aux1->dir == main)
            {
                aux1->dir = aux2;
                delete main;
            }
            else
            {
                aux1->esq = aux2;
                delete main;
            }
        }
        else
        {
            aux1 = main;

            aux2 = ApontaMenor(main->dir, aux1);

            if (aux1->dir == aux2)
            {
                aux1->dir = NULL;
            }
            else
            {
                aux1->esq = NULL;
            }

            main->x = aux2->x;

            delete aux2;
        }
        
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

void Varredura(arvore* main)
{
    if (main != NULL)
    {
        Varredura(main ->esq);
        cout << main->x << endl;
        Varredura(main->dir);
    }
    
}

int main()
{
    int n, x;            // Armazena o numero de modulos e qual o valor inserido
    arvore *main = NULL; // Node inicial da arvore

    while(cin >> x && x != -1) // Inserindo elementos na arvore
    {
        Inserir(main, x);
    }

    cin >> x; // Entrada do numero a ser buscado

    Remover(main, x);



    Apagar(main); // Apaga a arvore para recuperar a memoria

    return 0;
}