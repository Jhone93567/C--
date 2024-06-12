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

arvore *ApontaMenor(arvore *&main) // Funcao recursiva que encontra o menor valor a direita de um no e retorna o endereco de memoroa desse no
{
    arvore *aux = main;

    if (main->esq == NULL)
    {
        main = main->dir;
        return aux;
    }
    else
    {
        return ApontaMenor(main->esq);
    }
}

bool Remover(arvore *&main, int X) // Funcao recursiva que busca X e remove ele da arvore
{
    arvore *aux1;

    if (main == NULL) // Retorna falso caso a funcao seja chamada para um endereco nulo
    {
        return false;
    }

    if (X == main->x) // Caso o valor buscado seja o da main
    {
        aux1 = main; // Atribui a main para a funcao aux

        if (main->esq == NULL) // Caso o No a esquerda esteja vazio
        {
            main = main->dir; // Atribui o no da direita para a main
        }
        else if (main->dir == NULL) // Faz o inverso caso o da direita esteja vazio
        {
            main = main->esq;
        }
        else // Caso nenhum dos dois esteja vazio
        {
            aux1 = ApontaMenor(main->dir); // Encontra o menor valor a direita da main e salva seu endereco na aux

            main->x = aux1->x; // Atribui o menor valor para a main
        }

        delete aux1; // Remove a auxiliar da arvore e retorna true

        return true;
    }
    else if (X > main->x)
    {
        return Remover(main->dir, X);
    }
    else
    {
        return Remover(main->esq, X);
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

void Varredura(arvore *main) // Funcao recursiva que imprime a arvore em ordem crescente
{
    if (main->esq != NULL)
    {
        Varredura(main->esq);
    }

    cout << main->x << " ";

    if (main->dir != NULL)
    {
        Varredura(main->dir);
    }
}

int main()
{
    int x;               // Armazena o valor inserido
    arvore *main = NULL; // Node inicial da arvore

    while (cin >> x && x != 0) // Inserindo elementos na arvore ate receber 0
    {
        Inserir(main, x);
    }

    cin >> x; // Entrada do numero a ser buscado

    while (Remover(main, x))
        ; // Enquanto remover retornar true, chama a funcao

    Varredura(main); // Funcao que imprime a arvore em ordem crescente

    cout << endl; // Imprime uma quebra de linha

    Apagar(main); // Apaga a arvore para recuperar a memoria

    return 0;
}