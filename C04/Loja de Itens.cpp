#include <iostream>
#include <string>
#include <list>

using namespace std;

// Struct que armazena o codigo, nome e preco de um item da loja
struct item
{
    int codigo;
    string nome;
    int preco;
};

// Funcao de hash simples, nesse caso M e uma constante e seu valor e 43
int hash(int K)
{
    return K % 43;
}

// Funcao que cadastra os itens no vetor
void cadastro(item estoque[], int n)
{
    item aux;   // Struct auxiliar para fazer hashing e validar a posicao antes de salvar o item no estoque
    int pos, y; // variaves auxiliares, uma armaze a posicao resultante da funcao de hash e a outra para o for

    for (int i = 0; i < n; i++) // Repetindo o bloco n vezes, n sendo o numero de itens a serem cadastrados
    {
        cin >> aux.codigo >> aux.nome >> aux.preco; // Entrada do item a ser cadastrado

        for (y = 0; y < 43; y++) // Repetindo o bloco ate encontrar uma posicao vazia, com o maximo sendo 43
        {
            pos = hash(aux.codigo) + y; // Aplicando a funcao hashing e tratando a colisao
            if (pos >= 43)              // Caso apos somar y a posicao seja maior ou igual a 43, voltamos para o comeco do vetor
            {
                pos -= 43;
            }

            if (estoque[pos].codigo == -1) // Caso a posicao escolhida esteja desocupada, salva o item no estoque e sai do for de posicao
            {
                estoque[pos] = aux;
                break;
            }
        }
    }
}

int main()
{
    // Declarando variaveis
    item estoque[43]; // Tabela hash de struct item
    int n;            // Numero de itens que sera cadastrado, depois sera reaproveitada como auxiliar
    list<int> vi, ci; // Uma fila e uma pilha para registrar o codigo dos itens vendidos e comprados
    int LC = 0;       // Variavel que armazenara o lucro total
    int aux;          // Variavel auxiliar para encontrar o item correspondente ao codigo
    int pos;          // Variavel que armazena a posicao no vetor, calculada pela funcao hash

    // Atribuindo -1 a todas as posicoes de codigo da struct, para ajudar a saber se aquela posicao esta ocupada
    for (int i = 0; i < 43; i++)
    {
        estoque[i].codigo = -1;
    }

    // Entrada do numero de itens a ser cadastrado e chamando a funcao de cadastro
    cin >> n;
    cadastro(estoque, n);

    cin >> n; // Reaproveitando a variavel n para validar a entrada antes de inserila na fila
    while (n != -1)
    {
        vi.push_back(n);

        cin >> n;
    }

    cin >> n; // Reaproveitando a variavel n para validar a entrada antes de inserila na pilha
    while (n != -1)
    {
        ci.push_back(n);

        cin >> n;
    }

    cin >> n;                   // Entrada do numero de itens na fila que serao processados
    for (int i = 0; i < n; i++) // Repetindo o bloco n vezes
    {
        // Salvando o primeiro numero no aux e removendo ele da fila
        aux = vi.front();
        vi.pop_front();

        for (int X = 0; X < 43; X++) // Bloco que repete mais de uma vez caso a posicao encontrada esta ocupada com um item diferente do buscado
        {
            pos = hash(aux) + X; // Metodo para encontrar o item certo caso haja colisao

            if (pos >= 43) // Previne que a variavel seja maior que o tamanho do vetor
            {
                pos -= 43;
            }

            if (estoque[pos].codigo == aux) // Caso encontre o item como codigo buscado
            {
                LC += estoque[pos].preco; // Adiciona seu valor ao lucro
                break;                    // Sai do bloco de repeticao
            }
        }
    }

    cin >> n;                   // Entrada do numero de itens na pilha que serao processados
    for (int i = 0; i < n; i++) // Repetindo o bloco n vezes
    {
        // Salvando o primeiro numero no aux e removendo ele da pilha
        aux = ci.back();
        ci.pop_back();

        for (int X = 0; X < 43; X++) // Bloco que repete mais de uma vez caso a posicao encontrada esta ocupada com um item diferente do buscado
        {
            pos = hash(aux) + X; // Metodo para encontrar o item certo caso haja colisao

            if (pos >= 43) // Previne que a variavel seja maior que o tamanho do vetor
            {
                pos -= 43;
            }

            if (estoque[pos].codigo == aux) // Caso encontre o item como codigo buscado
            {
                LC -= estoque[pos].preco; // Subtrai seu valor ao lucro
                break;                    // Sai do bloco de repeticao
            }
        }
    }

    // Imprime o lucro
    cout << LC << " moeda(s)." << endl;

    return 0;
}