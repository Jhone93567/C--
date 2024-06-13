#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct ponto
{
    int x;
    int y;
};

float dist(ponto a, ponto b) // Funcao que calcula a distancia entre dois pontos
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

ponto mais_prox(int N, ponto atual, ponto vetor[]) // Funcao que encontra o ponto mais prox do ponto 'atual'
{
    ponto menor = {10000, 10000}; // Variavel auxiliar que armazena um valor alto inicialmente e depois armazenara o ponto mais prox

    for (int i = 0; i < N; i++)
    {
        if (dist(atual, vetor[i]) < dist(atual, menor))
        {
            menor = vetor[i];
        }
        else if (dist(atual, vetor[i]) == dist(atual, menor))
        {
            if (vetor[i].x < menor.x)
            {
                menor = vetor[i];
            }
            else if (menor.x == vetor[i].x)
            {
                if (vetor[i].y < menor.y)
                {
                    menor = vetor[i];
                }
            }
        }
    }

    return menor;
}

int main()
{
    int N;             // Numero de pontos que serao inseridos
    ponto pos, aux;    // ponto auxiliar e um que armazena a posicao atual
    ponto pontos[100]; // vetor que armazena os pontos

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> aux.x >> aux.y;
        pontos[i] = aux;
    }

    cin >> pos.x >> pos.y;

    aux = mais_prox(N, pos, pontos);

    cout << aux.x << " " << aux.y << endl;

    return 0;
}