#include <iostream>

using namespace std;

int main()
{
    int N; // numero de casos
    int X[101]; // vetor para armaenar os numeros
    int Y[101];
    char Op[101]; // vetor para armazenar os operadores
    int i; // contador

    cin >> N; // entrada

    for (i = 0; i < N; i++) // repete os blocos N vezes
    {
        cin >> X[i]; 
    }
    
    for (i = 0; i < N; i++)
    {
        cin >> Y[i]; 
    }
    
    for (i = 0; i < N; i++)
    {
        cin >> Op[i]; 
    }

    cout << fixed;
    cout.precision(2); // imprime com 2 casas decimais

    for (i = 0; i < N; i++) // repetir o bloco N vezes
    {
        if(Op[i] == '+') // comando if para identificar o operador e imprime a conta
            cout << X[i] << " " << Op[i] << " " << Y[i] << " = " << X[i]+Y[i] << endl; 
        else if(Op[i] == '-')
            cout << X[i] << " " << Op[i] << " " << Y[i] << " = " << X[i]-Y[i] << endl;
        else if(Op[i] == '*')
            cout << X[i] << " " << Op[i] << " " << Y[i] << " = " << X[i]*Y[i] << endl;
        else if(Op[i] == '/')
            cout << X[i] << " " << Op[i] << " " << Y[i] << " = " << (float)X[i]/Y[i] << endl;
    }
        

    return 0;
}