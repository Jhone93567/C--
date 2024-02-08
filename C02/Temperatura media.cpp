#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream arq;      // Handle para ler arquivos
    char nomearq[100]; // Nome do arquivo
    float temp;        // temperatura lida
    float media = 0;   // media a ser calculada
    int n = 0;         // contador

    cin.getline(nomearq, 100); // Entrada nome do arquivo

    arq.open(nomearq, ifstream::in); // Abre o arquivo

    while (!arq.eof()) // Enquanto o arquivo nao chegar no fim
    {
        arq >> temp; // le uma temperatura

        media += temp; // soma a media

        n++; // soma +1 ao contador
    }

    media = media / n; // calcula a media

    // Imprime com 1 casa apos a virgula
    cout << fixed;
    cout.precision(1);

    // Saida
    cout << "Temperatura media: " << media << " graus" << endl;

    return 0;
}