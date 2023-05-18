#include <bits/stdc++.h> // biblioteca que contem todas as outras

using namespace std;

int main()
{
    multiset<int> s; //set ou multiset e um vetor que ordena as variaveis em ordem crescente, set nao permite variaveis repitidas, dierente do multiser

    s.insert(20); // para adicionar uma variavel ao set usa-se: nome do set + .insert
    s.insert(5);
    s.insert(5);
    s.insert(40);
    s.insert(1);

    set<int>::iterator it; // um iterator e o ponteiro do set, pois o set nn tem indice e precisa do iterator para apontar sua posicao

    for (it = s.begin(); it != s.end(); it++) // atribui s.begin ao iterator para posicionalo no comeco do set
    {
        cout << *it << " "; // colocar asterisco antes do nome do iterator para imprimir o valor que ele aponta e nao o ponteiro em si
    }

    return 0;
}