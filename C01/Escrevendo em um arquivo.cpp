#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arqout;   // Handle para escrever em arquivos
    ifstream arqin;    // Handle para ler arquivos
    char nomearq[100]; // Nome do arquivo
    float aux;         // variavel auxiliar

    cin.getline(nomearq, 100); // Lendo o nome do arquivo

    arqout.open(nomearq, ofstream::out); // Criando o arquivo

    cin >> aux; // Entrada do numero a ser escrito

    while (aux != 0) // Enquanto o numero nn for 0
    {
        arqout << aux << endl; // Escreve no arquivo

        cin >> aux; // Entrada de outra auxiliar
    }
    
    arqout.close(); // Fecha o arquivo

    arqin.open(nomearq, ifstream::in); // Abre o arquivo para leitura

    while (!arqin.eof()) // Enquanto o aruivo nao acabar
    {
        arqin >> aux; // Le linha por linha

        cout << aux << " "; // Imprime cada numero com um espaco entre eles
    }

    cout << endl; // quebra a linha

    return 0;
}