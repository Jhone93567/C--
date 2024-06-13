#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct ponto
{
    int x;
    int y;
};

// Checka se o ponto q esta no segmento pr
bool onSegment(ponto p, ponto q, ponto r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
        return true;

    return false;
}

// Encontrando a orientacao
int orientation(ponto p, ponto q, ponto r)
{
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0)
        return 0; // collinear

    return (val > 0) ? 1 : 2; // horario ou anti horario
}

// Retorna true se p1q1 intercepta p2q2
bool Intersect(ponto p1, ponto q1, ponto p2, ponto q2)
{
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    if (o1 != o2 && o3 != o4)
        return true;

    // Casos especiais
    if (o1 == 0 && onSegment(p1, p2, q1))
        return true;

    if (o2 == 0 && onSegment(p1, q2, q1))
        return true;

    if (o3 == 0 && onSegment(p2, p1, q2))
        return true;

    if (o4 == 0 && onSegment(p2, q1, q2))
        return true;

    return false; // Nao se encaixa em nenhum dos casos
}

// Funcao que testa se um ponto esta incluso tracando uma reta horizontal com o ponto
// e verificando quantas vezes a reta intercepta o poligono
bool esta_incluso(int N, ponto atual, ponto inf, ponto vetor[])
{
    int contador = 0;

    for (int i = 0; i < N - 1; i++)
    {
        if (onSegment(vetor[i], atual, vetor[i + 1]))
            return true;

        if (Intersect(atual, inf, vetor[i], vetor[i + 1]))
            contador++;
    }

    if (onSegment(vetor[0], atual, vetor[N - 1]))
        return true;

    if (Intersect(atual, inf, vetor[0], vetor[N - 1]))
        contador++;

    if (contador % 2 == 0)
        return false;
    else
        return true;
}

int main()
{
    int N;
    ponto atual, aux, vetor[100];

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> atual.x >> atual.y;
        vetor[i] = atual;
    }

    // Recebendo o ponto que sera checkado e criando um ponto na mesma linha horizontal porem no infinito
    cin >> atual.x >> atual.y;
    aux.x = 10000;
    aux.y = atual.y;

    if (esta_incluso(N, atual, aux, vetor))
        cout << "DENTRO" << endl;
    else
        cout << "!(DENTRO)" << endl;

    return 0;
}