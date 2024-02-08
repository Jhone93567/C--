#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char cidade[100]; // string para a entrada do nome da cidade
    int r;            // se r for igual a 0, a string e igual

    cin.getline(cidade, 100); // entrada para o nome da cidade

    if (!strcmp(cidade, "Brasilia")) // strcmp retorna 0 se houver igualdade, com a exclamacao no comeco 0 vira true
        cout << "61" << endl;
    else if (!strcmp(cidade, "Salvador"))
        cout << "71" << endl;
    else if (!strcmp(cidade, "Sao Paulo"))
        cout << "11" << endl;
    else if (!strcmp(cidade, "Rio de Janeiro"))
        cout << "21" << endl;
    else if (!strcmp(cidade, "Juiz de Fora"))
        cout << "32" << endl;
    else if (!strcmp(cidade, "Campinas"))
        cout << "19" << endl;
    else if (!strcmp(cidade, "Vitoria"))
        cout << "27" << endl;
    else if (!strcmp(cidade, "Belo Horizonte"))
        cout << "31" << endl;
    else if (!strcmp(cidade, "Santa Rita do Sapucai"))
        cout << "35" << endl;
    else
        cout << "DDD nao cadastrado" << endl;

    return 0;
}