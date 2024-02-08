#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char main [1000]; // string de 1000 caracteres

    cin.getline(main,1000); // entrada

    for (int i = 0; i < strlen(main); i++) // repetir o bloco X vezes, sendo X o tamanho da string
    {
        if (main[i] == ' ') // se ele ler um espaco, quebra a linha
        {
            cout << endl;
        }
        else // se nn imprime letra por letra
        {
            cout << main[i];
        }
        
        
    }
    

    return 0;
}