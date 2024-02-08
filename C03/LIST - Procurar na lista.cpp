#include<iostream>

#include<list>

using namespace std;

bool encontrar(list<int> lista, int x)
{
     list<int>::iterator it; // Parecido com um ponteiro para os elementos da lista
	
	it = lista.begin(); // Aponta para o primeiro elemento da lista
	while(it != lista.end()){ // Enquanto não apontar para o último elemento da lista
		if (*it == x) // Se o valor(*) que o iterator aponta for o valor buscado retorna true
        {
            return true;
        }
        
		it++;
	}

    return false; // Se a lista inteira for percorrida e nao encontrar o valor, retorna falso
}

int main()
{
    int N; // Entrada
    list<int> lista; // Declarando lista ligada

    cin >> N;

    while (N != 0) // Inserir numeros na lista enquanto nao houver 0
    {
        lista.push_back(N);

        cin >> N;
    }
    
    cin >> N; // Numero a ser buscado

    if(encontrar(lista,N)) // Caso a funcao retorne true imprimir encontrado, senao imprime nao encontrado
        cout << "Encontrado" << endl;
    else
        cout << "Nao encontrado" << endl;

    return 0;
}