#include <iostream>

using namespace std;

int main()
{
    int N; // contador de numeros a serem analisados
    float Views [1000]; // vetor que armazenara o numero de vizualizações
    int M = 0; // contador de videos com mais de 10M
    int m = 0; // contador de videos com menos de 10M

    cin >> N; // entrada de uantas pessoas serao analizadas
    
    for (int i = 0; i < N; i++) // entrada para preencher o vetor
    {
        cin >> Views[i]; // entrada numero de vizualizacoes de cada video
        
        if (Views[i] > 10000000) // se o video tiver mais de 10M views
        {
          M++;  // adiciona mais 1 ao contador
        }
        if (Views[i] < 10000000) // se tiver menos de 10M views
        {
            m++; // adiciona mais 1 ao contador
        }
        
    }
    
    cout << M << " video(s) com mais de 10M views" << endl; // saida para quantos videos tem mais de 10M
    cout << m << " video(s) com menos de 10M views" << endl; // saida para quantos videos tem menos de 10M

    return 0;
}