#include <iostream>
#include <cstring> // biblioteca com comandos para interagir com vetores

using namespace std;

int main()
{
    char palavra1[20];
    char palavra2[20];
    int r;

    strcpy(palavra1, "computador");
    strcpy(palavra2, "notebook");

    r = strcmp(palavra1, palavra2); // strcamp subtrai letra por letra, logo se o valor for -1 as palavras estao em ordem alfabetica, 0 sao iguais, +1 estao em ordem nao alfabetica

    cout << r << endl;

    if(r < 0)
        cout << "Ordem alfabetica" << endl;
    else if (r>0)
        cout << "Ordem nao alfabetica" << endl;
    else
        cout << "Iguais" << endl;

    return 0;
}