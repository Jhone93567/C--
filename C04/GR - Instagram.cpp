#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<string>Seguidores[10]; //Lista do tipo string que armazenara os seguidores de cada pessoa
    string nomes [10]; // Vetor que armazena os nomes de casa
    int aux, n; // Variaveis auxiliares

    cin >> aux; // Entrada do numero de pessoas na rede

    cin.ignore(); // Ignorando o enter pois farei uma entrada de string
    
    for (int i = 0; i < aux; i++) // Repete o bloco aux vezes
    {
        getline(cin,nomes[i]); // Entra com os nomes
    }
    
    for (int i = 0; i < aux; i++) // Repetindo novamente
    {
        while(cin >> n && n != -1) // Enquanto nao entrar com -1
        {
            Seguidores[n].push_back(nomes[i]); // Armazena o nome do seguidor na posicao de quem ele segue
        }
    }

    cin >> aux; // Entra com o numero de quem deseja saber os seguidores

    for (list<string>::iterator it = Seguidores[aux].begin(); it != Seguidores[aux].end(); it++) // Varre a lista da pessoa
    {
        cout << *it << endl; // Imprime o nome de todos
    }
        

    return 0;
}