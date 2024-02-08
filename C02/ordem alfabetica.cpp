#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // 3 strings, palavras 1 2 e 3
    char p1[100];
    char p2[100];
    char p3[100];
    char aux[100]; // string auxiliar
    // Entrada
    cin.getline(p1, 100);
    cin.getline(p2, 100);
    cin.getline(p3, 100);

    if (strcmp(p1, p2) > 0)
    {
        strcpy(aux, p1);
        strcpy(p1, p2);
        strcpy(p2, aux);
    }
    if (strcmp(p2, p3) > 0)
    {
        strcpy(aux, p2);
        strcpy(p2, p3);
        strcpy(p3, aux);
    }
    if (strcmp(p1, p2) > 0)
    {
        strcpy(aux, p1);
        strcpy(p1, p2);
        strcpy(p2, aux);
    }

    cout << p1 << " " << p2 << " " << p3 << endl;

    return 0;
}