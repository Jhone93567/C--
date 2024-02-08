#include <iostream>
#include <cstring> // biblioteca com comandos para interagir com vetores

using namespace std;

int main()
{
    char senha[20];

    cin.getline(senha, 20);

    while (strcmp(senha, "Abre-te Sesamo!") != 0) // strcmp compara duas strings e retorna 0 se elas forem iguais
    {
        cout << "Senha errada" << endl;
        cin.getline(senha, 20);
    }
    cout << "Pode entrar" << endl;

    return 0;
}