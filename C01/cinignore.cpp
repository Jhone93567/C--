#include <iostream>

using namespace std;

int main()
{
    char nome[20];
    int nota;

    cin >> nota;
    cin.ignore(); // ignora o enter entre a entrada da nota e do vetor, sem ele o programa entende que o enter foi para a nota e o vetor
    cin.getline(nome, 20);

    cout << "Ola " << nome << endl;
    cout << "Sua nota foi: " << nota << endl;

    return 0;
}