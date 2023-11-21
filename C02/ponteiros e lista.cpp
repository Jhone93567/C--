#include<iostream>

#include<list>

using namespace std;

int main()
{
    int a = 35;
    int * p; //usamos * para indicar que a variavel e um ponteiro que aponta parao tipo definido antes
    p = &a; //usamos & para atribuir uma posicao na memoria a um ponteiro

    cout << *p << endl;

    *p = 20; //e possivel usar ponteiro para atribuir valores a variavel na qual ele aponta

    cout << a <<endl;

    int b[10] = {0,1,2,3,4,5,6,7,8,9}; //um vetor nada mais e do que um ponteiro que comeca na posicao 0

    cout << b <<endl; //imprime a posicao na memoria que o vetor aponta

    p = b; //e possivel atribuir a posicao do vetor ao ponteiro, pois ambos sao um ponteiro

    cout << *p << endl; //imprime o numero(*) na primeira posicao do vetor(pois um vetor e um ponteiro que aponta para a primeira opcao)

    cout << b << endl; // mesma coisa que fazer cout << b

    cout << *(p+3) << endl; //mesma coisa que fazer cout<< b[3]

    int vetor[5];
    list<int> lista; //cria uma lista(vetor dinamico) de inteiros chamada lista

    vetor[0] = 33;
    lista.push_back(33); // em vez de atriuir como um vetor, usamos push_back para atribui na ultima posicao ou push_front para atribuir na primeira posicao
    
    vetor[1] = 66;
    lista.push_back(66);

    cout << lista.front() << endl; //imprime o primeiro elemento da lista

    for(int i=0;i<5;i++){
        cout << vetor[i] << endl;
    }

    list<int>::iterator it; // Parecido com um ponteiro para os elementos da lista
	
	it = lista.begin(); // Aponta para o primeiro elemento da lista
	while(it != lista.end()){ // Enquanto não apontar para o último elemento da lista
		cout<< *it <<endl; // Apresenta o valor do endereço apontado pelo iterador
		it++;
	}

    //Algoritmo de fila

    list<int> fila;

    fila.push_back(0);  // nas filas inserimos dados no final e removemos com .pop o comeco, como uma fila do banco

    while(!fila.empty()) //.empty retorna true caso a list esteja vazia
    {
        cout << fila.front() << endl;
        fila.pop_front();
    }

    //Algoritmo de pilha

    list<int> pilha;

    pilha.push_front(0); // nas pilhas inserimos e removemos dados da sua frente, como se fizessemos uma pilha de pratos

    while (!pilha.empty())
    {
        cout << pilha.front() << endl;
        pilha.pop_front();
    }
    

    return 0;
}