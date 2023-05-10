#include <iostream>

using namespace std;

int main()
{
    int X[100]; // vetor com 100 casas
    int i = 0; // contador
    int P; // numero a ser pesquisado
    int Y; // variavel auxiliar
    bool Z = false; // bool declara uma variavel que so pode ser true ou false

    cin >> Y; // Entrada da variavel auxiliar

    while(Y != 0) // enquanto o bloco nao for quebrado, ira se repetir
    {
        X[i++] = Y; // atribui a variavel auxiliar ao vetor
     
        cin >> Y; // registra um numero 
    } 

    cin >> P; // entrada do numero a ser pesquisado

    for ( int j = 0; j < i; j++) // ler todos os numeros registrados ate o 0
    {
        if (X[j] == P) // se ele ler o numero pesquisado
        {
            cout << "Elemento " << P << " encontrado na posicao " << j << endl; // imprime a posicao do numero pesquisado

            Z = true; // atribui verdadeiro ao Z

            break; // e termina o bloco
        }      
    }

    if (!Z) // exclamacao antes do bool inverte seu valor, e o if so acessa o bloco se seu conteudo for true
    {
        cout << "Elemento " << P << " nao foi encontrado" << endl; // saida
    }
    

    return 0;
}