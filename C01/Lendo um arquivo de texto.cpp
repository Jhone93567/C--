#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream arq;    // Handle para mexer com arquivos
    char texto[200]; // armazenara o texto do aruivo
    char nome[100];  // nome do arquivo

    cin.getline(nome, 100); // Le o nome do arquivo

    arq.open(nome, ifstream::in); // Abre o arquivo pra leitura

    while (!arq.eof()) // enquanto o arquivo nao acabar
    {
        arq.getline(texto, 200); // ler o arquivo

        cout << texto << endl; // imprimir oq esta escrito
    }

    arq.close(); // Fecha o arquivo

    return 0;
}