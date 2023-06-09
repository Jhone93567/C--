#include <iostream>

using namespace std;

struct Perfil // struct que armazenara o nome e os pontos de cada padawan
{
    char nome[200];
    int pontos;
};

int main()
{
    int N;           // contador
    int maior = 0;   // compara para saber qual padawan tem mais pontos
    int maiorN;      // salva o numero do melhor padawan
    Perfil p[1001];  // chama a struct
    float media = 0; // media de todos os padawans

    cin >> N; // entrada de quantas vezes repetira o codigo

    for (int i = 0; i < N; i++) // repete o codigo N vezes
    {
        cin.ignore();                // ignora o enter do cin N e cin pontos
        cin.getline(p[i].nome, 200); // entrada do nome do padawan
        cin >> p[i].pontos;          // entrada de pontos

        media += p[i].pontos; // vai somando os pontos para calcular a media depois

        if (p[i].pontos > maior) // if que salva o melhor padawan
        {
            maior = p[i].pontos;
            maiorN = i;
        }
    }

    media = media / N; // media

    // Saida
    cout << "Padawan com mais pontos: " << p[maiorN].nome << endl;
    cout << "Pontos: " << p[maiorN].pontos << endl;
    cout << fixed;
    cout.precision(2);
    cout << "Media da turma: " << media << " pontos" << endl;

    return 0;
}