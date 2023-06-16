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
    int clas;        // classificacao do filme
};

int sorteio(int a, int b) // funcao que retorna um numero aleatorio de a ate b
{
    int sort;
    sort = rand() % (b - a + 1) + a; // sorteia um numero q vai ate b

    return sort;
}

int main()
{
    ifstream arq;      // handle para arquivos
    Filme filme[2000]; // chama a struct e cria um vetor
    srand(time(NULL)); // inicializa a semente do gerador de numeros aleaorios
    int rgen;          // variavel para a resposta do usuario sobre o genero escolhido
    int rand[10];      // vetor que armazenara o numero dos filmes sorteados
    int ans = 1;       // bool para a resposta do usuario sobre querer ver outro filme
    int n, i = 0;      // contador
    int srand[10];     // Vetor que salva os filmes mostrados
    int rindic = 0;    // variavel para a resposta do usuario sobre as indicacoes

    // Colocando todos os valores do vetor em -1
    for (n = 0; n < 10; n++)
    {
        srand[n] = -1;
    }

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

    int r;            // resposta
    ofstream arq2;    // variavel chamada arquivo
    char nome[200];   // nome do novo usuario
    int genero; // genero preferido do usuario
    int Idade;        // Idade do usuario

    // opcao de escolha
    cout << "Bem vindo, e a sua primeira vez na plataforma?" << endl;
    cout << "1(sim) / 2(nao)" << endl;

    cin >> r;

    cin.ignore();

    // condicao para criar um perfil para a pessoa
    if (r == 1)
    {
        cout << "Ai sim. Seja bem-vindo!" << endl;
        cout << "Primeiro, me diga seu nome e sobrenome." << endl;

        cin.getline(nome, 200);

        cout << "Agora me fale sua Idade" << endl;

        cin >> Idade;

        cout << "Estamos quase la." << endl;
        cout << "Por ultimo, me fale seu genero de filme preferido" << endl;

        cin.ignore();
        cin >> genero;

        strcat(nome, ".txt");

        arq2.open(nome, ofstream ::out);

        // escrevendo informacoes no arquivo
        arq2 << nome << endl;
        arq2 << Idade << endl;
        arq2 << genero << endl;

        arq2.close();
    }

    // caso a pessoa nao queira criar um perfil
    else
    {
        cout << "Tudo bem, tenha uma otima experiencia usando nossa plataforma!" << endl;
    }

    while (ans == 1) // while para repetir o codigo enquanto o usuario quiser assistir algum filme
    {
        // perguntando ao usuario o genero que ele quer assistir
        cout << "Qual genero voce quer ver?" << endl;

        cout << "1 - Acao/Aventura  2 - Animacao  3 - Comedia  4 - Drama/Suspense  5 - Terror  6 - Ficcao cientifica  7 - Romance  8 - Historico  9 - Musical" << endl;

        cin >> rgen; // entrada da resposta

        switch (rgen) // switch para cada genero escolhido
        {
        case 1:
            for (n = 0; n < 5; n++)
            {
                rand[n] = sorteio(0, 134);
            }

            for (n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(0, 134);
                }
            }

            for (n = 0; n < 5; n++)
            {
                srand[n] = rand[n];
            }

            for (n = 0; n < 5; n++)
            {
                if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
                    cout << " "; // garante que o filme nao apareca + de 1 vez
                else
                    cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 2:
            for (n = 0; n < 5; n++)
            {
                rand[n] = sorteio(135, 194);
            }

            for (n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(135, 194);
                }
            }

            for (n = 0; n < 5; n++)
            {
                srand[n] = rand[n];
            }

            for (n = 0; n < 5; n++)
            {
                if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
                    cout << " "; // garante que o filme nao apareca + de 1 vez
                else
                    cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 3:
            for (n = 0; n < 5; n++)
            {
                rand[n] = sorteio(195, 287);
            }

            for (n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(195, 287);
                }
            }

            for (n = 0; n < 5; n++)
            {
                srand[n] = rand[n];
            }

            for (n = 0; n < 5; n++)
            {
                if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
                    cout << " "; // garante que o filme nao apareca + de 1 vez
                else
                    cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 4:
            for (n = 0; n < 5; n++)
            {
                rand[n] = sorteio(288, 407);
            }

            for (n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(288, 407);
                }
            }

            for (n = 0; n < 5; n++)
            {
                srand[n] = rand[n];
            }

            for (n = 0; n < 5; n++)
            {
                if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
                    cout << " "; // garante que o filme nao apareca + de 1 vez
                else
                    cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 5:
            for (n = 0; n < 5; n++)
            {
                rand[n] = sorteio(408, 462);
            }

            for (n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(408, 462);
                }
            }

            for (n = 0; n < 5; n++)
            {
                srand[n] = rand[n];
            }

            for (n = 0; n < 5; n++)
            {
                if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
                    cout << " "; // garante que o filme nao apareca + de 1 vez
                else
                    cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 6:
            for (n = 0; n < 5; n++)
            {
                rand[n] = sorteio(463, 507);
            }

            for (n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(463, 507);
                }
            }

            for (n = 0; n < 5; n++)
            {
                srand[n] = rand[n];
            }

            for (n = 0; n < 5; n++)
            {
                if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
                    cout << " "; // garante que o filme nao apareca + de 1 vez
                else
                    cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 7:
            for (n = 0; n < 5; n++)
            {
                rand[n] = sorteio(508, 527);
            }

            for (n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(508, 527);
                }
            }

            for (n = 0; n < 5; n++)
            {
                srand[n] = rand[n];
            }

            for (n = 0; n < 5; n++)
            {
                if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
                    cout << " "; // garante que o filme nao apareca + de 1 vez
                else
                    cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 8:
            for (n = 0; n < 5; n++)
            {
                rand[n] = sorteio(528, 547);
            }

            for (n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(528, 547);
                }
            }

            for (n = 0; n < 5; n++)
            {
                srand[n] = rand[n];
            }

            for (n = 0; n < 5; n++)
            {
                if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
                    cout << " "; // garante que o filme nao apareca + de 1 vez
                else
                    cout << filme[rand[n]].nomef << endl;
            }

            break;

        case 9:
            for (n = 0; n < 5; n++)
            {
                rand[n] = sorteio(548, 567);
            }

            for (n = 0; n < 5; n++)
            {
                while (filme[rand[n]].clas > Idade)
                {
                    rand[n] = sorteio(548, 567);
                }
            }

            for (n = 0; n < 5; n++)
            {
                srand[n] = rand[n];
            }

            for (n = 0; n < 5; n++)
            {
                if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
                    cout << " "; // garante que o filme nao apareca + de 1 vez
                else
                    cout << filme[rand[n]].nomef << endl;
            }

            break;

        default:
            break;
        }

        cout << endl;
        cout << "Digite o numero do filme que deseja assistir" << endl; // Pergunta qual filme o usuario assistirá

        cin >> n;

        srand[n] = -1; // Exclui o filme assistido do vetor

        cout << "Essas indicacoes foram uteis pra voce?" << endl
             << "0- Nao  1- Sim" << endl;
        cin >> rindic;

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