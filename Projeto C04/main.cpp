// Beatriz Vaz, Felipe Loschi, Felipe Reis, João Gabriel Chereze, Pedro Henrique Dias
#include <iostream>
#include <iomanip>
#include <list>
#include <climits>
#include <locale.h>
#include <windows.h> // Para conseguir alterar a cor do terminal.
#include <cmath>
#include <vector>

using namespace std;

string tipo1[18] = {
	"Aço", "Água", "Dragão", "Eletrico", "Fada", "Fantasma", "Fogo", "Gelo", "Grama",
	"Inseto", "Lutador", "Normal", "Noturno", "Pedra", "Psíquico", "Terrestre", "Venenoso", "Voador"};

string tipo2[19] = {
	"Aço", "Água", "Dragão", "Eletrico", "Fada", "Fantasma", "Fogo", "Gelo", "Grama",
	"Inseto", "Lutador", "Normal", "Noturno", "Pedra", "Psíquico", "Terrestre", "Venenoso", "Voador", "Null"};

struct ponto
{
	int x, y; // Coordenadas.
};

struct pokemon
{
	string nome;
	int id, tipo1, tipo2;
	ponto posicao; // Coordenadas
};

struct treenode
{
	pokemon dados;
	treenode *left;
	treenode *right;
};

struct Estrada
{
	int origem, destino, peso;
};

struct cidades
{
	list<Estrada> vizinhos;
	int codigo;	 // codigo da cidade
	bool centro; // possui um centro poke ou nao
	string nome; // nome da cidade
};

void entrada_grafo(cidades cidade[], int num_vertices, int arestas, bool orientado)
{
	int origem, destino, peso;

	for (int i = 0; i < num_vertices; i++)
	{
		cout << "Agora preciso que informe o nome da cidade: " << endl;
		getline(cin >> ws, cidade[i].nome);
		cout << "Agora preciso que informe o código da cidade: " << endl;
		cin >> cidade[i].codigo;
		cout << "Para verificação de centros pokémon na cidade, digite '0' para 'não' e '1' para 'sim' : " << endl;
		cin >> cidade[i].centro;
		cout << endl;
	}

	cout << endl;

	// inserindo os dados do grafo

	// Instrução para entrada dos caminhos do grafo
	cout << "Agora vamos inserir os caminhos entre as cidades." << endl;
	cout << "Para cada caminho, escreva o ponto de origem, o ponto de chegada e a distância entre as cidades." << endl;
	cout << "Exemplo de entrada: '0 1 10' indica um caminho da cidade 0 para a cidade 1 com distância 10." << endl;
	cout << endl;

	for (int i = 0; i < arestas; i++)
	{
		cin >> origem >> destino >> peso;

		cidade[origem].vizinhos.push_back({origem, destino, peso});

		if (orientado == 0)
		{
			cidade[destino].vizinhos.push_back({destino, origem, peso});
		}
	}
}

// Função para mostrar as cidades e seus vizinhos.
void print_cidades(cidades cidade[], int numVertices)
{
	list<Estrada>::iterator p;
	cout << "Lista das cidades cadastradas: " << endl;
	cout << endl;
	cout << "| " << setw(2) << "Nome(s) " << setw(15) << " | " << setw(6) << right << setw(10) << "Código" << setw(7) << " | " << setw(15) << " Centro Pokémon" << right << setw(43) << " | Vizinhos - Origem, destino e distância" << endl;
	for (int i = 0; i < numVertices; i++)
	{
		cout << "| ";
		cout << setw(19) << left << setw(20) << left << cidade[i].nome << left << " | ";
		cout << left << setw(8) << right << cidade[i].codigo << right << setw(9) << " | ";
		if (!cidade[i].centro)
			cout << "Não possui centro |";
		else
			cout << right << setw(15) << "Possui centro" << right << setw(4) << " |";

		// Verifica se há vizinhos para esta cidade
		if (!cidade[i].vizinhos.empty())
		{
			cout << " ";
			for (p = cidade[i].vizinhos.begin(); p != cidade[i].vizinhos.end(); p++)
			{
				cout << p->origem << " -> " << p->destino << "(" << p->peso << ")" << " ";
			}
		}
		cout << endl;
	}
}

int shortest_path_dijkstra(cidades cidades[], int vertices, int cod_atual)
{
	bool intree[vertices];
	int distance[vertices], parent[vertices];
	list<Estrada>::iterator p;

	for (int u = 0; u < vertices; u++)
	{
		intree[u] = false;
		distance[u] = INT_MAX;
		parent[u] = -1;
	}
	distance[cod_atual] = 0;
	int v = cod_atual;
	while (intree[v] == false)
	{
		intree[v] = true;
		for (p = cidades[v].vizinhos.begin(); p != cidades[v].vizinhos.end(); p++)
		{
			int dest = p->destino;
			int weight = p->peso;
			if (distance[dest] > distance[v] + weight)
			{
				distance[dest] = distance[v] + weight;
				parent[dest] = v;
			}
		}
		v = 0;
		int dist = INT_MAX;
		for (int u = 0; u < vertices; u++)
		{
			if (intree[u] == false && dist > distance[u])
			{
				dist = distance[u];
				v = u;
			}
		}
	}
	v = 0;
	int dist = INT_MAX;
	for (int u = 0; u < vertices; u++)
	{
		if (intree[u] == true && dist > distance[u] && cidades[u].centro)
		{
			dist = distance[u];
			v = u;
		}
	}
	return v;
}

void busca_centro(cidades cidade[], int num_vertices)
{
	int pos = 0, cod_atual, end;
	cout << "Escreva o código da cidade em que você está: ";
	cin >> cod_atual;
	for (int i = 0; i < num_vertices; i++)
	{

		if (cod_atual == cidade[i].codigo)
		{
			pos = i;
			if (cidade[pos].centro)
			{
				cout << "Sua cidade já tem um centro pokémon!" << endl;
				pos = -1;
				break;
			}
		}
	}
	if (pos != -1)
	{

		end = shortest_path_dijkstra(cidade, num_vertices, pos);
		cout << "A cidade mais próxima com um centro Pokémon é: " << cidade[end].nome << endl;
	}
}

typedef treenode *treenodeptr;

void dados_pokemon(pokemon &poke)
{
	cout << "Escreva o nome, o tipo1, o tipo2, o id, e as coordenadas x e y do seu Pokémon: " << endl;
	getline(cin >> ws, poke.nome);
	cin >> poke.tipo1 >> poke.tipo2 >> poke.id >> poke.posicao.x >> poke.posicao.y;
}

int compara_nome_pokemon(string &nome, pokemon &poke)
{
	if (nome == poke.nome)
	{
		return 0;
	}
	else if (nome < poke.nome)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

int compara_tipo_pokemon(int tipo1, pokemon poke)
{
	if (tipo1 == poke.tipo1)
	{
		return 0;
	}
	else if (tipo1 < poke.tipo1)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

void pokeInsert_por_tipo(treenodeptr &p, pokemon poke_tipo)
{
	if (p == NULL)
	{
		p = new treenode;
		p->dados = poke_tipo;
		p->left = NULL;
		p->right = NULL;
	}
	else
	{
		int compare = compara_tipo_pokemon(poke_tipo.tipo1, p->dados);
		if (compare < 0)
		{
			pokeInsert_por_tipo(p->left, poke_tipo);
		}
		else
		{
			pokeInsert_por_tipo(p->right, poke_tipo);
		}
	}
}

void pokeInsert_por_nome(treenodeptr &p, pokemon poke_nome)
{
	if (p == NULL)
	{
		p = new treenode;
		p->dados = poke_nome;
		p->left = NULL;
		p->right = NULL;
		cout << poke_nome.nome << " inserido com sucesso!" << endl;
	}
	else
	{
		int compare = compara_nome_pokemon(poke_nome.nome, p->dados);
		if (compare == -1)
		{
			pokeInsert_por_nome(p->left, poke_nome);
		}
		else
		{
			pokeInsert_por_nome(p->right, poke_nome);
		}
	}
}

treenodeptr pokeSearch(treenodeptr p, string poke)
{
	if (p == NULL)
	{
		return NULL;
	}
	else
	{
		cout << "Comparando: " << poke << " com " << p->dados.nome << endl;
		if (poke == p->dados.nome) // Elemento encontrado.
		{
			return p;
		}
		else if (poke < p->dados.nome) // Procura na subárvore esquerda.
		{
			return pokeSearch(p->left, poke);
		}
		else // Procura na subárvore direita.
		{
			return pokeSearch(p->right, poke);
		}
	}
}

void pesquisarPokemon(treenodeptr arvore)
{
	string op;
	cout << "Digite o nome do pokémon que deseja pesquisar: ";
	getline(cin >> ws, op);
	treenodeptr encontrado = pokeSearch(arvore, op);
	if (encontrado != NULL)
	{
		cout << "Encontrado" << endl;
	}
	else
	{
		cout << "Não encontrado" << endl;
	}
}

treenodeptr tMenor(treenodeptr &p)
{
	treenodeptr t;
	t = p;
	if (t->left == NULL)
	{
		// Encontrou o menor valor
		p = p->right;
		return t;
	}
	else // Continua procurando na esquerda
		return tMenor(p->left);
}

bool pokeRemove(treenodeptr &p, string nome)
{
	treenodeptr pk;

	if (p == NULL)
		return false;

	if (compara_nome_pokemon(nome, p->dados) == 0)
	{
		pk = p;

		if (p->left == NULL)
			p = p->right;

		else
		{
			if (p->right == NULL)
				p = p->left;

			else
			{
				pk = tMenor(p->right);
				p->dados = pk->dados;
			}
		}

		delete pk;
		return true;
	}

	else
	{
		if (compara_nome_pokemon(nome, p->dados) == -1)
			return pokeRemove(p->left, nome);
		else
			return pokeRemove(p->right, nome);
	}
}

void removerPokemon(treenodeptr &arvore)
{
	string a_remover;
	bool removido;
	cout << "Digite o nome do pokémon que deseja remover: ";
	getline(cin >> ws, a_remover);
	removido = pokeRemove(arvore, a_remover);
	if (removido)
	{
		cout << "Removido" << endl;
	}
	else
	{
		cout << "Não encontrado para remoção" << endl;
	}
}

void inOrder_nome(treenodeptr p)
{
	static bool hp = false; // Para conseguir mostrar só uma vez os dados.
	if (p != NULL)
	{
		inOrder_nome(p->left);
		if (!hp)
		{
			cout << "Mostrando os dados dos pokémons em ordem crescente de nome: " << endl;
			cout << endl;
			cout << "Nome            | Tipo1      | Tipo2      | ID    | X     | Y" << endl;
			hp = true;
		}
		cout << left << setw(15) << p->dados.nome
			 << " | " << left << setw(10) << tipo1[p->dados.tipo1]
			 << " | " << left << setw(10) << tipo2[p->dados.tipo2]
			 << " | " << left << setw(5) << p->dados.id
			 << " | " << left << setw(5) << p->dados.posicao.x
			 << " | " << left << setw(5) << p->dados.posicao.y << endl;
		inOrder_nome(p->right);
	}
}
// caso 8:
void inOrder_tipo(treenodeptr p)
{
	static bool hp = false;
	if (p != NULL)
	{
		inOrder_tipo(p->left);
		if (!hp)
		{
			cout << "Mostrando os dados dos pokémons em ordem crescente de tipo: " << endl;
			cout << endl;
			cout << "Nome            | Tipo1      | Tipo2      | ID    | X     | Y" << endl;
			hp = true;
		}
		cout << left << setw(15) << p->dados.nome
			 << " | " << left << setw(10) << tipo1[p->dados.tipo1]
			 << " | " << left << setw(10) << tipo2[p->dados.tipo2]
			 << " | " << left << setw(5) << p->dados.id
			 << " | " << left << setw(5) << p->dados.posicao.x
			 << " | " << left << setw(5) << p->dados.posicao.y << endl;
		inOrder_tipo(p->right);
	}
}

void conta_tipo(treenodeptr p, int tipo, int &i)
{

	if (p != NULL)
	{
		// cout << "Comparando: " << tipo << " com " << p->dados.tipo1 << endl;
		if (tipo == p->dados.tipo1 || tipo == p->dados.tipo2) // Elemento encontrado.
		{
			i++;
		}
		conta_tipo(p->left, tipo, i);
		conta_tipo(p->right, tipo, i);
	}
}

// caso 9:
void imprime_poke_tipo(treenodeptr p)
{

	int escolha_tipo = 0, i = 0;
	cout << "Para mostrar quantos pokémons por tipo, digite os seguintes números para acessar : " << endl;
	cout << endl;
	do
	{
		cout << "0 - Aço"
			 << endl
			 << "1 - Água"
			 << endl
			 << "2 - Dragão"
			 << endl
			 << "3 - Elétrico"
			 << endl
			 << "4 - Fada"
			 << endl
			 << "5 - Fantasma"
			 << endl
			 << "6 - Fogo"
			 << endl
			 << "7 - Gelo"
			 << endl
			 << "8 - Grama"
			 << endl
			 << "9 - Inseto"
			 << endl
			 << "10 - Lutador"
			 << endl
			 << "11 - Normal"
			 << endl
			 << "12 - Noturno"
			 << endl
			 << "13 - Pedra"
			 << endl
			 << "14 - Psíquico"
			 << endl
			 << "15 - Terrestre"
			 << endl
			 << "16 - Venenoso"
			 << endl
			 << "17 - Voador"
			 << endl
			 << "Caso queira sair, insira um número fora do intervalo de 0 a 17"
			 << endl;
		cin >> escolha_tipo;
		if (escolha_tipo < 0 || escolha_tipo > 17)
		{
			break;
		}
		conta_tipo(p, escolha_tipo, i);
		cout << endl;
		cout << "Há " << i << " Pokémon(s) do tipo " << tipo1[escolha_tipo] << endl;
		cout << endl;
		i = 0;
	} while (escolha_tipo >= 0 || escolha_tipo <= 17);
	cout << endl;
}

// caso 10:
int orientation(ponto p, ponto q, ponto r)
{
	int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);

	if (val == 0)
		return 0;			  // colinear
	return (val > 0) ? 1 : 2; // horario ou anti-horario
}

double calcular_distancia(ponto p1, ponto p2)
{
	int dx = p2.x - p1.x;
	int dy = p2.y - p1.y;
	double distancia = sqrt(dx * dx + dy * dy);

	return distancia;
}

void gift_wraping(vector<ponto> &points, int n)
{
	double perimetro = 0;

	// Deve haver pelomenos 3 pontos
	if (n < 3)
		return;

	int next[n];
	for (int i = 0; i < n; i++)
		next[i] = -1;

	// Encontra o ponto mais a esquerda
	int l = 0;
	for (int i = 1; i < n; i++)
		if (points[i].x < points[l].x)
			l = i;

	int p = l, q;
	do
	{
		q = (p + 1) % n;
		for (int i = 0; i < n; i++)
			if (orientation(points[p], points[i], points[q]) == 2)
				q = i;

		next[p] = q;
		p = q;
	} while (p != l);

	// Imprime o resultado
	for (int i = 0; i < n; i++)
	{
		if (next[i + 1] != -1)
			perimetro += calcular_distancia(points[i], points[i + 1]);
	}

	cout << "Perimetro: " << perimetro << endl;

	points.clear();
}

void contar_pokemons(treenodeptr p, ponto minha_posicao, int &contador, vector<ponto> &pilha)
{
	if (p != NULL)
	{
		if (calcular_distancia(minha_posicao, p->dados.posicao) <= 100)
		{
			contador++;
			pilha.push_back(p->dados.posicao);
		}
		contar_pokemons(p->left, minha_posicao, contador, pilha);
		contar_pokemons(p->right, minha_posicao, contador, pilha);
	}
}

void consultar_pokemons_no_raio(treenodeptr p)
{
	ponto minha_posicao;
	vector<ponto> pilha;
	int contador = 0;

	cout << "Para ter acesso à quantidade de pokémons dentro de um raio de 100 metros, digite suas coordenadas (x e y): " << endl;
	cin >> minha_posicao.x >> minha_posicao.y;

	pilha.push_back(minha_posicao);

	contar_pokemons(p, minha_posicao, contador, pilha);

	cout << contador << " pokémons dentro do raio!" << endl;

	gift_wraping(pilha, int(pilha.size()));
}

void exibe_introducao(int &orientado, int &num_vertices, int &arestas)
{
	// Introdução
	cout << "Olá, treinador. Bem vindo ao sistema de localização de pokémons!" << endl;
	// cout << "\x1b[3mEste texto está em itálico!\x1b[0m" << endl; // Texto em itálico.
	cout << endl;

	// Entrada dos dados do grafo a ser contruido:
	cout << "Escreva o número de cidades e o número de caminhos:" << endl;
	cin >> num_vertices >> arestas;

	// Definindo se o grafo sera orientado ou não:
	cout << "Agora, preciso que escolha se há possibilidade de retorno de uma cidade a outra, para isso: " << endl;
	cout << "Digite '0' para dizer se o caminho será não orientado ou '1' para orientado." << endl;

	do
	{
		cin >> orientado;
		if (orientado == 0 || orientado == 1)
		{
			break;
		}
		cout << "Desculpe, valor inserido fora dos limites declarados!" << endl;
		cout << "Digite '0' para dizer se o caminho será não orientado ou '1' para orientado." << endl;

	} while (orientado != 0 || orientado != 1);
}

void Imprime_menu()
{
	cout << "MENU" << endl
		 << "1-Entrada de dados das cidades"
		 << endl
		 << "2-Imprimir as cidades cadastradas"
		 << endl
		 << "3-Buscar cidade com centro pokémon mais próximo"
		 << endl
		 << "4-Fazer a Inserção dos Pokémons"
		 << endl
		 << "5-Pesquisar os pokémons"
		 << endl
		 << "6-Remover algum pokémon"
		 << endl
		 << "7-Imprimir pokémons cadastrados em ordem alfabética de nome"
		 << endl
		 << "8-Imprimir pokémons cadastrados em ordem alfabética de tipo"
		 << endl
		 << "9-Mostrar quantos pokémons de determinado tipo"
		 << endl
		 << "10-Mostrar quantos pokémons podem ser encontrados dentro de um raio de 100 metros e o perimetro do fecho convexo formado por esses pokemons"
		 << endl
		 << "Pressione qualquer outro número pra sair"
		 << endl;
}

int main()
{
	// Permitindo acentuação no código
	setlocale(LC_ALL, "");
	system("color 74"); // Altera cor do terminal.

	// Declarando variaveis
	int num_vertices, arestas, orientado, menu = 1, contador = 0;
	treenodeptr arvore_por_nome = NULL;
	treenodeptr arvore_por_tipo = NULL;
	pokemon novo_pokemon;
	ponto minha_posicao;

	exibe_introducao(orientado, num_vertices, arestas);

	cidades cidade[num_vertices];

	// Codigo de menu simples, usando a variavel menu no loop
	while (menu != 0)
	{
		// Introducao do menu e entrada da variavel
		cout << endl;
		Imprime_menu();
		cin >> menu;
		cout << endl;

		// Usando switch case para o menu
		switch (menu)
		{
			// Caso 1: Entrada do grafo
		case 1:
			// fazendo a inicialização dos dados das cidades (codigo, centro poke e nome)
			entrada_grafo(cidade, num_vertices, arestas, orientado);
			break;
			// Caso 2: Imprime as cidades salvas
		case 2:
			print_cidades(cidade, num_vertices);
			break;
			// Caso 3: Busca a cidade com centro pokémon mais próxima.
		case 3:
			busca_centro(cidade, num_vertices);
			break;
		case 4:
			// Caso 4: Insere os pokémons na árvore.
			dados_pokemon(novo_pokemon);
			pokeInsert_por_nome(arvore_por_nome, novo_pokemon);
			pokeInsert_por_tipo(arvore_por_tipo, novo_pokemon);
			break;
		case 5:
			// Caso 5: busca os pokémons na árvore.
			pesquisarPokemon(arvore_por_nome);
			break;
		case 6:
			// Caso 6: Remove os pokémons na árvore.
			removerPokemon(arvore_por_nome);
			break;
		case 7:
			// Caso 7: Mostra os pokémons em ordem de nome.
			inOrder_nome(arvore_por_nome);
			break;
		case 8:
			// Caso 8: Mostra os pokémons em ordem de tipo.
			inOrder_tipo(arvore_por_tipo);
			break;
		case 9:
			// Caso 9: Conta quantos pokémons de determinado tipo:
			imprime_poke_tipo(arvore_por_tipo);
			break;
		case 10:
			// caso 10: Mostra quantos pokémons podem ser encontrados dentro de um raio de 100 metros.
			consultar_pokemons_no_raio(arvore_por_nome);
			break;
		default: // Caso receba outro valor: sai do loop.
			menu = 0;
		}
	}
	return 0;
}