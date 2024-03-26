#include <iostream>

using namespace std;


struct Implante
{
    string nome;
    string fabricante;
    int tier;
    float taxa_psicose;
};

const int MAX_PSICOSE_RATE = 60;

void ler_implante(Implante *implante);

int main() {

    int n_implantes;
    cin >> n_implantes;

    Implante *implantes = new Implante[n_implantes];

    // ler implantes
    for (int i = 0; i < n_implantes; i++)
    {
        ler_implante(implantes + i); // passa os endereços de memoria correspondentes de cada implante
    }
    
    // calcular taxa de psicose total
    Implante *ptr = implantes;
    float taxa_total = 0;
    for (int i = 0; i < n_implantes; i++, ptr++)
    {
        taxa_total += ptr->taxa_psicose;
    }

    if (taxa_total > MAX_PSICOSE_RATE)
    {
        cout << "Alerta! Recompensa de 50000 edinhos pela cabeça do Ciberpsicopata.\n";
        return 0;
    }
    cout << "Vamos tchum! Temos uma cidade pra conquistar!\n";

    // free memory
    delete[] implantes;

    return 0;
}

void ler_implante(Implante *implante)
{
    getline(cin >> ws, implante->nome);
    getline(cin >> ws, implante->fabricante);
    cin >> implante->tier;
    cin >> implante->taxa_psicose;
}