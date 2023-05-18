#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;                            // numero de testes
    unsigned long long fibonacci[64]; // vetor que armazenara a sequencia de fibonacci
    int N;                            // posicao do numero a ser lido

    fibonacci[0] = 0;
    fibonacci[1] = 1; // os primeiros digitos sao 0 e 1

    for (int i = 2; i <= 64; i++) // calcular ate o numero 64 da sequencia
    {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }

    cin >> T; // entrada do numero de testes a serem realizados

    for (int i = 0; i < T; i++) // repetir o bloco T vezes
    {
        cin >> N; // entrada de qual posicao voce quer ver o numero

        cout << "Fib(" << N << ") = " << fibonacci[N] << endl; // imprime o numero da posicao N
    }

    return 0;
}