#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream arq;        // Handle para ler o arquivo
    char nomearq[100];   // nome do arquivo que sera lido
    char nomeFilme[100]; // nome do filme
    int ano;             // ano de lancamento

    // Lendo o nome do arquivo
    cin.getline(nomearq, 100);

    // Abrindo o arquivo para leitura
    arq.open(nomearq, ifstream::in);

    while (!arq.eof()) // Enquanto o arquivo nao chegar no fim
    {
    // Lendo dados do arquivo
    arq.getline(nomeFilme, 100);
    arq >> ano;
    arq.ignore();

    // Mostrando as informacoes
    cout << "Filme: " << nomeFilme << endl;
    cout << "Ano: " << ano << endl;
    }

    // Fechando o arquivo
    arq.close();

    return 0;
}