#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct gladiador // Struct com os atributos dos gladiadores
{
    string nome; // Nome e armazenado em uma string

    // O resto e armazenado em um inteiro
    int forca;
    int habilidade;
    int idade;
};

void cadastro(gladiador jogadores[]) // Funcao que cadastra os jogadores
{
    for (int i = 0; i < 5; i++) // Repete o bloco 5 vezes
    {
        cout << "Qual o nome do primeiro jogador:" << endl;
        getline(cin, jogadores[i].nome); // Entrada do nome, usando getline pois e uma string

        // Entrada dos inteiros
        cout << "Qual a forca dele:" << endl;
        cin >> jogadores[i].forca;
        cout << "Qual a habilidade dele:" << endl;
        cin >> jogadores[i].habilidade;
        cout << "Qual a idade dele:" << endl;
        cin >> jogadores[i].idade;
        cin.ignore(); // Usando ignore para ignorar a quebra de linha e nao bugar a string
    }

    return;
}

string combate(gladiador jogador[], int x, int y) // Funcao que retorna uma string e define o vencedor
{
    // Declarando variaveis auxiliares
    string resultado;
    int danoX, danoY;
    int vidaX, vidaY = 100;

    // Calculando o dano de cada jogador
    danoX = jogador[x].forca + (pow(2, jogador[x].habilidade));
    danoY = jogador[y].forca + (pow(2, jogador[y].habilidade));

    // Enquanto a vida de ninguem chegar a 0, eles continuam atacando um ao outro
    while (vidaX > 0 && vidaY > 0)
    {
        vidaY -= danoX;
        if (vidaY > 0) // O segundo jogador so ataca o primeiro caso ele ainda esteja "vivo"
        {
            vidaX -= danoY;
        }
    }

    // Retornando o vencedor dependendo de quem tem a maior vida
    if (vidaX <= 0)
    {
        resultado = jogador[x].nome + " ganhou a batalha contra " + jogador[y].nome;
    }
    else
    {
        resultado = jogador[y].nome + " ganhou a batalha contra " + jogador[x].nome;
    }

    return resultado;
}

int main()
{
    // Declarando variaveis
    gladiador jogadores[10];
    int x, y;

    // Funcao que cadastra o nome e os atributos de cada um
    cadastro(jogadores);

    // Entrada da posicao de quem batalhara com quem
    cout << "Insira as posicoes de quem enfrentara quem:" << endl;
    cin >> x >> y;

    // O programa acaba quando ele recebe o valor -1 como posicao
    while (x != -1 && y != -1)
    {
        cout << combate(jogadores, x, y) << endl;

        cout << "Insira as posicoes de quem enfrentara quem:" << endl;
        cin >> x >> y;
    }

    return 0;
}