#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Filme
{
    char nomef[300]; // nome do filme
    int clas;        // classificação do filme
};

int sorteio(int a, int b) // funcao que retorna um numero aleatorio de a até b
{
    int sort;
    sort = rand() % (b + 1); // sorteia um numero q vai ate b
    while (sort < a)         // se sortear um numero menor que a
    {
        sort = rand() % (b + 1); // sorteia denovo
    }
    return sort;
}

int main()
{
    ifstream arq;      // handle para arquivos
    Filme filme[2000]; // chama a struct e cria um vetor
    srand(time(NULL)); // inicializa a semente do gerador de numeros aleaorios
    int rgen;          // variavel para a resposta do usuario sobre o genero escolhido
    int rand[10];      // vetor que armazenara o numero dos filmes sorteados
    int ans = 1;   // bool para a resposta do usuario sobre querer ver outro filme
    int i = 0;         // contador

    // 0 a 134 acao / aventura, 135 a 194 animacao, 195 a 287 comedia, 288 a 407 drama / suspense, 408 a 462 terror, 463 a 507 ficcao cientifica, 508 a 527 romance, 528 a 547 historico, 548 a 567 musical
    arq.open("lista.txt", ifstream::in); // abre o arquivo para leitura

    while (!arq.eof()) // enquanto o arquivo nao terminar
    {
        // lendo o arquivo e armazenando no vetor da struct 'Filme'
        arq.getline(filme[i].nomef, 300);
        arq >> filme[i].clas;
        arq.ignore();

        i++;
    }

    arq.close(); // fecha o arquivo

    char Nome[200]; // Vetor que armazena o nome do usuario
    int Idade;      // Idade do usuario

    // Interface inicial que pedira o nome e a idade do usuario
    cout << "Bem vindo ao PiratexPlusPlus, primeiramente, qual o seu nome?" << endl;
    cin.getline(Nome, 200);

    cout << "Ola " << Nome << ", uma ultima coisa, qual a sua idade?" << endl;
    cin >> Idade;

    while (ans == 1) // while para repetir o codigo enquanto o usuario quiser assistir algum filme
    {
        // perguntando ao usuario o genero que ele quer assistir
        cout << "Qual genero voce quer ver?" << endl;

        cout << "1 - Acao/Aventura  2 - Animacao  3 - Comedia  4 - Drama/Suspense  5 - Terror  6 - Ficcao cientifica  7 - Romance  8 - Historico  9 - Musical" << endl;

        cin >> rgen; // entrada da resposta

        switch (rgen) // switch para cada genero escolhido
        {
        case 1:
            for (int n = 0; n < 5; n++)
            {
                rand[n] = sorteio(0, 134);
            }

            for (int n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(0, 134);
                }
            }

            for (int n = 0; n < 5; n++)
            {
                cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 2:
            for (int n = 0; n < 5; n++)
            {
                rand[n] = sorteio(135, 194);
            }

            for (int n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(135, 194);
                }
            }

            for (int n = 0; n < 5; n++)
            {
                cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 3:
            for (int n = 0; n < 5; n++)
            {
                rand[n] = sorteio(195, 287);
            }

            for (int n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(195, 287);
                }
            }

            for (int n = 0; n < 5; n++)
            {
                cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 4:
            for (int n = 0; n < 5; n++)
            {
                rand[n] = sorteio(288, 407);
            }

            for (int n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(288, 407);
                }
            }

            for (int n = 0; n < 5; n++)
            {
                cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 5:
            for (int n = 0; n < 5; n++)
            {
                rand[n] = sorteio(408, 462);
            }

            for (int n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(408, 462);
                }
            }

            for (int n = 0; n < 5; n++)
            {
                cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 6:
            for (int n = 0; n < 5; n++)
            {
                rand[n] = sorteio(463, 507);
            }

            for (int n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(463, 507);
                }
            }

            for (int n = 0; n < 5; n++)
            {
                cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 7:
            for (int n = 0; n < 5; n++)
            {
                rand[n] = sorteio(508, 527);
            }

            for (int n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(508, 527);
                }
            }

            for (int n = 0; n < 5; n++)
            {
                cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 8:
            for (int n = 0; n < 5; n++)
            {
                rand[n] = sorteio(528, 547);
            }

            for (int n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(528, 547);
                }
            }

            for (int n = 0; n < 5; n++)
            {
                cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 9:
            for (int n = 0; n < 5; n++)
            {
                rand[n] = sorteio(548, 567);
            }

            for (int n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(548, 567);
                }
            }

            for (int n = 0; n < 5; n++)
            {
                cout << filme[rand[n]].nomef << endl;
            }

            break;

        default:
            break;
        }

        cout << "Deseja assistir outro filme?" << endl; // Pergunta se o usuario deseja ver outro filme
        cout << "1-Sim  0-Nao" << endl;

        cin >> ans; // Entrada da resposta do usuario

        while (ans != 1 && ans != 0) // enquanto a resposta nao seja 1 ou 0
        {
            cout << "Por favor, responda com 1 (sim) ou 0 (nao)" << endl;

            cin >> ans; // pergunta denovo
        }
        
    }

    cout << "Obrigado por escolher a PiratexPlusPlus!" << endl;

    return 0;
}