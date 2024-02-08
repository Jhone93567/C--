#include <iostream>

using namespace std;

int main()
{
    int votos[1000]; // vetor que armazenara os likes e dislikes
    int N; // numero de votos armazenados
    int soma = 0; // soma dos votos

    cin >> N; // entrada do numero de votos a serem lidos

    for (int i = 0; i < N; i++) // for para armazenar os votos
    {
        cin >> votos[i]; // entrada dos votos

        soma += votos[i]; // soma os votos, like = 1, dislike = -1
    }

    if (soma < 0) // se a soma dos votos for negativa
    {
        cout << "A maioria nao gostou" << endl; // quer dizer que a maioria nao gostou
    }
    else if (soma > 0) // se a soma dos votos for positiva, a maioria gostou
    {
        cout << "A maioria gostou" << endl; // que dizer que a maioria gostou
    }
    else // se a soma for 0
    {
        cout << "Deu empate" << endl; // quer dizer que deu empate
    }    

    return 0;
}