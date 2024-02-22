#include<iostream>

using namespace std;

int main()
{
    // Declarando variaveis
    int lm,lM,cerca,area_maior,x,y;

    cin >> cerca; // Entrada de quantos metros de cerca serao usados

    // Atribuindo o valor inicial para o lado menor de 1, e para x e y para evitar 0 x 0
    lm = 1;
    x = 1;
    y = 1;
    lM = cerca - 2; // Atribuindo o maior valor possivel para o lador maior e formando um retangulo

    area_maior = 0; // Area maior comeca em 0 pois nao tem maior ainda

    while(lm * lM > area_maior) // Enquanto nao encontrar a maior area
    {
        x = lm; // Salva o valor do lado menor antes de incrementar
        y = lM; // Salva o valor do lado maior antes do incremento
        area_maior = lm*lM; // Atualiza o valor da maior area
        // Incrementando os valores e mantendo o maximo de cerca
        lm++; 
        lM -= 2;
    }

    cout << x << " x " << y << endl; // Saida

    return 0;
}