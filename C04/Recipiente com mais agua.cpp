#include<iostream>

using namespace std;

int main()
{
    int n;
    int recipiente [20];
    int maior = 0;
    int maior2 = 0;
    int volume;
    int x;
    int y;
    int comprimento;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> recipiente[i];
        if (recipiente[i] > maior)
        {
            maior = recipiente[i];
            x = i + 1;
        }
        else if (recipiente [i] > maior2)
        {
            maior2 = recipiente[i];
            y = i + 1;
        }        
    }

    if (x > y)
    {
        comprimento = x - y;
    }
    else
    {
        comprimento = y - x;
    }
    
    volume = maior2 * comprimento;

    cout << volume << endl;

    return 0;
}