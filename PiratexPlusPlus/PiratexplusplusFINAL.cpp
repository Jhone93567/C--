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
	int clas;		 // classificacao do filme
};

int sorteio(int a, int b) // funcao que retorna um numero aleatorio de a ate b
{
	int sort;
	sort = rand() % (b - a + 1) + a; // sorteia um numero q vai ate b

	return sort;
}

int main()
{
	ifstream arq;	   // handle para arquivos
	Filme filme[2000]; // chama a struct e cria um vetor
	srand(time(NULL)); // inicializa a semente do gerador de numeros aleaorios
	int rgen;		   // variavel para a resposta do usuario sobre o genero escolhido
	int rand[10];	   // vetor que armazenara o numero dos filmes sorteados
	int ans = 1;	   // bool para a resposta do usuario sobre querer ver outro filme
	int n, i = 0;	   // contador
	int srand[10];	   // Vetor que salva os filmes mostrados
	int rindic = 0;	   // variavel para a resposta do usuario sobre as indicacoes

	// Colocando todos os valores do vetor em -1
	for (n = 0; n < 10; n++)
	{
		rand[n], srand[n] = -1;
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

	int r;						   // resposta
	ofstream arq2;				   // variavel chamada arquivo
	char nome[200], nome_txt[200]; // nome do novo usuario e nome que o arquivo recebera
	int genero;					   // genero preferido do usuario
	int Idade;					   // Idade do usuario
	int r2;						   // segunda resposta
	int r3;						   // terceira resposta

	// variaveis de leitura de arquivo
	ifstream arq3;
	char N[200]; // nome;
	int GR;		 // genero

	// opcao de escolha
	cout << "Bem vindo, e a sua primeira vez na plataforma?" << endl;
	cout << "1(sim) / 2(nao)" << endl;

	cin >> r; // respondendo se e a primeira vez da pessoa na plataforma

	cin.ignore();

	// caso seja a primeira vez da pessoa da plataforma
	if (r == 1)
	{
		cout << "Deseja criar um perfil?" << endl;
		cout << "1(sim) / 2(nao)" << endl;

		cin >> r2; // respondendo se deseja criar um perfil

		cin.ignore();

		if (r2 == 1) // se a pessoa quiser criar um perfil
		{
			cout << "Ai sim. Seja bem-vindo!" << endl
				 << "Primeiro, me diga seu nome e sobrenome." << endl;

			// recebendo o nome da pessoa
			cin.getline(nome, 200);

			// fazendo a variavel que o arquivo vai abrir nome da pessoa recebe o que esta escrito na varaivel "nome"
			strcpy(nome_txt, nome);

			// adicionando ".txt" a variavel que ira abrir o arquivo
			strcat(nome_txt, ".txt");

			cout << "Agora me fale sua Idade" << endl;

			// recebendo a idade da pessoa
			cin >> Idade;

			cout << "Estamos quase la." << endl;
			cout << "Por ultimo, digite o numero do seu genero de filme preferido" << endl;
			cout << "1 - Acao/Aventura  2 - Animacao  3 - Comedia  4 - Drama/Suspense  5 - Terror  6 - Ficcao cientifica  7 - Romance  8 - Historico  9 - Musical" << endl;

			// recebendo o genero que ela mais gosta
			cin >> genero;

			arq2.open(nome_txt, ofstream ::out);

			// escrevendo informacoes no arquivo
			arq2 << nome << endl;
			arq2 << Idade << endl;
			arq2 << genero << endl;

			arq2.close();
		}

		// caso a pessoa nao queira criar um perfil
		else if (r2 == 2)
		{
			cout << "Tudo bem, tenha uma otima experiencia usando nossa plataforma!" << endl;
		}
	}

	// caso a pessoa ja tenha usado a plataforma
	else if (r == 2)
	{
		cout << "Deseja acessar seu perfil ou navegar livremente pela plataforma?" << endl;
		cout << "1 - Acessar perfil / 2 - Navegar livremente" << endl;

		cin >> r3;

		// se a pessoa quiser acessar o perfil dela
		if (r3 == 1)
		{
			cout << "Nome do perfil, por favor:" << endl;
			cin.ignore();
			cin.getline(nome, 200); // encontrando o perfil da pessoa

			strcat(nome, ".txt"); // adicionando ".txt" ao nome dela, pois o perfil foi salvo em ".txt"

			arq3.open(nome, ifstream ::in);

			// recebendo dados do arquivo
			arq3.getline(N, 200);
			arq3 >> Idade;
			arq3 >> GR;

			// fechando o arquivo
			arq3.close();

			// escrevendo informacoes na tela
			cout << "Ola " << N << " seu genero favorito e: " << GR << endl;
		}
		// caso ela nao queira acessar o perfil
		else if (r3 == 2)
		{
			cout << "Tranquilo, vamos aos filmes" << endl;
		}
	}

	while (ans == 1) // while para repetir o codigo enquanto o usuario quiser assistir algum filme
	{
		int j = 1; // contador dos filmes

		// perguntando ao usuario o genero que ele quer assistir
		cout << "Qual genero voce quer ver?" << endl;

		cout << "1 - Acao/Aventura  2 - Animacao  3 - Comedia  4 - Drama/Suspense  5 - Terror  6 - Ficcao cientifica  7 - Romance  8 - Historico  9 - Musical" << endl;

		cin >> rgen; // entrada da resposta

		while ((rgen == 5 && Idade < 16) || (rgen == 8 && Idade < 12))
		{
			cout << "Sinto muito, voce nao tem idade suficiente para esse genero, por favor escolha outro." << endl;

			cout << "1 - Acao/Aventura  2 - Animacao  3 - Comedia  4 - Drama/Suspense  5 - Terror  6 - Ficcao cientifica  7 - Romance  8 - Historico  9 - Musical" << endl;

			cin >> rgen;
		}

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
				if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
				{
					rand[n] = -1;
				} // garante que o filme nao apareca + de 1 vez
				else
				{
					cout << "[" << j << "]: " << filme[rand[n]].nomef << endl;
					j++;
				}
			}

			if (rindic == 1)
			{
				for (n = 0; n < 5; n++)
				{
					if (srand[n] == -1)
					{
					}
					else
					{
						cout << "[" << j << "]: " << filme[srand[n]].nomef << endl;
						j++;
					}
				}
			}

			for (n = 0; n < 5; n++)
			{
				srand[n] = rand[n];
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
				if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
				{
					rand[n] = -1;
				} // garante que o filme nao apareca + de 1 vez
				else
				{
					cout << "[" << j << "]: " << filme[rand[n]].nomef << endl;
					j++;
				}
			}

			if (rindic == 1)
			{
				for (n = 0; n < 5; n++)
				{
					if (srand[n] == -1)
					{
					}
					else
					{
						cout << "[" << j << "]: " << filme[srand[n]].nomef << endl;
						j++;
					}
				}
			}

			for (n = 0; n < 5; n++)
			{
				srand[n] = rand[n];
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
				if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
				{
					rand[n] = -1;
				} // garante que o filme nao apareca + de 1 vez
				else
				{
					cout << "[" << j << "]: " << filme[rand[n]].nomef << endl;
					j++;
				}
			}

			if (rindic == 1)
			{
				for (n = 0; n < 5; n++)
				{
					if (srand[n] == -1)
					{
					}
					else
					{
						cout << "[" << j << "]: " << filme[srand[n]].nomef << endl;
						j++;
					}
				}
			}

			for (n = 0; n < 5; n++)
			{
				srand[n] = rand[n];
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
				if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
				{
					rand[n] = -1;
				} // garante que o filme nao apareca + de 1 vez
				else
				{
					cout << "[" << j << "]: " << filme[rand[n]].nomef << endl;
					j++;
				}
			}

			if (rindic == 1)
			{
				for (n = 0; n < 5; n++)
				{
					if (srand[n] == -1)
					{
					}
					else
					{
						cout << "[" << j << "]: " << filme[srand[n]].nomef << endl;
						j++;
					}
				}
			}

			for (n = 0; n < 5; n++)
			{
				srand[n] = rand[n];
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
				if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
				{
					rand[n] = -1;
				} // garante que o filme nao apareca + de 1 vez
				else
				{
					cout << "[" << j << "]: " << filme[rand[n]].nomef << endl;
					j++;
				}
			}

			if (rindic == 1)
			{
				for (n = 0; n < 5; n++)
				{
					if (srand[n] == -1)
					{
					}
					else
					{
						cout << "[" << j << "]: " << filme[srand[n]].nomef << endl;
						j++;
					}
				}
			}

			for (n = 0; n < 5; n++)
			{
				srand[n] = rand[n];
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
				if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
				{
					rand[n] = -1;
				} // garante que o filme nao apareca + de 1 vez
				else
				{
					cout << "[" << j << "]: " << filme[rand[n]].nomef << endl;
					j++;
				}
			}

			if (rindic == 1)
			{
				for (n = 0; n < 5; n++)
				{
					if (srand[n] == -1)
					{
					}
					else
					{
						cout << "[" << j << "]: " << filme[srand[n]].nomef << endl;
						j++;
					}
				}
			}

			for (n = 0; n < 5; n++)
			{
				srand[n] = rand[n];
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
				if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
				{
					rand[n] = -1;
				} // garante que o filme nao apareca + de 1 vez
				else
				{
					cout << "[" << j << "]: " << filme[rand[n]].nomef << endl;
					j++;
				}
			}

			if (rindic == 1)
			{
				for (n = 0; n < 5; n++)
				{
					if (srand[n] == -1)
					{
					}
					else
					{
						cout << "[" << j << "]: " << filme[srand[n]].nomef << endl;
						j++;
					}
				}
			}

			for (n = 0; n < 5; n++)
			{
				srand[n] = rand[n];
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
				if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
				{
					rand[n] = -1;
				} // garante que o filme nao apareca + de 1 vez
				else
				{
					cout << "[" << j << "]: " << filme[rand[n]].nomef << endl;
					j++;
				}
			}

			if (rindic == 1)
			{
				for (n = 0; n < 5; n++)
				{
					if (srand[n] == -1)
					{
					}
					else
					{
						cout << "[" << j << "]: " << filme[srand[n]].nomef << endl;
						j++;
					}
				}
			}

			for (n = 0; n < 5; n++)
			{
				srand[n] = rand[n];
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
				if (rand[n] == rand[n + 1] || rand[n] == rand[n + 2])
				{
					rand[n] = -1;
				} // garante que o filme nao apareca + de 1 vez
				else
				{
					cout << "[" << j << "]: " << filme[rand[n]].nomef << endl;
					j++;
				}
			}

			if (rindic == 1)
			{
				for (n = 0; n < 5; n++)
				{
					if (srand[n] == -1)
					{
					}
					else
					{
						cout << "[" << j << "]: " << filme[srand[n]].nomef << endl;
						j++;
					}
				}
			}
			for (n = 0; n < 5; n++)
			{
				srand[n] = rand[n];
			}

			break;

		default:
			break;
		}

		cout << endl;
		cout << "Digite o numero do filme que deseja assistir" << endl; // Pergunta qual filme o usuario assistirá

		cin >> n;

		srand[n - 1] = -1; // Exclui o filme assistido do vetor

		cout << "Essas indicacoes foram uteis pra voce?" << endl
			 << "0- Nao  1- Sim" << endl;

		cin >> rindic; // Entrada da resposta do usuario

		while (rindic != 1 && rindic != 0) // enquanto a resposta nao seja 1 ou 0
		{
			cout << "Por favor, responda com 1 (sim) ou 0 (nao)" << endl;

			cin >> rindic; // pergunta denovo
		}

		cout << "Deseja assistir outro filme?" << endl; // Pergunta se o usuario deseja ver outro filme
		cout << "0-Nao  1-Sim" << endl;

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