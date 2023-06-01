#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream arq; // handle para escrever no arquivo
    char nomearq[100]; // nome do aruivo
    char nomeFilme[100]; // nome do filme
    int ano; // ano de lancamento

    //Lendo o nome do arquivo
    cout << "Nome do arquivo:" << endl;
    cin.getline(nomearq,100);

    // Abrindo arquivo para escrita
    arq.open(nomearq, ofstream::out);

    // Lendo dados do filme
    cout << "Nome do filme:" << endl;
    cin.getline(nomeFilme,100);
    cout << "Ano:" << endl;
    cin >> ano;

    // Escrevendo informacoes no arquivo
    arq << nomeFilme << endl;
    arq << ano << endl;

    // Fechando o arquivo
    arq.close();

    return 0;
}