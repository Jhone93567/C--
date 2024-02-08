#include <iostream>

#include <string>

#include <cmath>

using namespace std;

struct gladiador // struct com os atributos dos gladiadores
{
    string nome;
    int forca;
    int habilidade;
    int idade;
};

void cadastro(gladiador jogadores[])
{
    for (int i = 0; i < 5; i++)
    {
    getline(cin, jogadores[i].nome);
    cin >> jogadores[i].forca;
    cin >> jogadores[i].habilidade;
    cin >> jogadores[i].idade;
    cin.ignore();
    }

    return;
}

string combate(gladiador jogador[],int x,int y)
{
    string resultado;
    int danoX,danoY;
    int vidaX,vidaY = 100;

    danoX = jogador[x].forca + (pow(2,jogador[x].habilidade));
    danoY = jogador[y].forca + (pow(2,jogador[y].habilidade));

    while (vidaX > 0 && vidaY > 0)
    {
        vidaY -= danoX;
        if (vidaY > 0)
        {
            vidaX -= danoY;
        }
    }
    if (vidaX <= 0)
    {
        resultado = jogador[x].nome+" ganhou a batalha contra "+jogador[y].nome;
    }
    else
    {
        resultado = jogador[y].nome+" ganhou a batalha contra "+jogador[x].nome;
    }

    return resultado;   
}

int main()
{
    // Declarando variaveis
    gladiador jogadores[4];
    int x,y;

    cadastro(jogadores);
        
    cin >> x >> y;

    while (x != -1 && y != -1)
    {
        cout << combate(jogadores,x,y) << endl;

        cin >> x >> y;
    }
    
    return 0;
}