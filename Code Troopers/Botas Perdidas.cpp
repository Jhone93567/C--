#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int Pe[100];
    int Pd[100];
    int X;
    int n = 0;
    char Aux;

    while (cin >> N)
    {
        for (int i = 0; i < 100; i++)
        {
            Pe[i] = 0;
            Pd[i] = 0;
        }
        
        for (int i = 0; i < N; i++)
        {
            cin >> X >> Aux;

            
            if (Aux == 'E')
            {
                Pe[X]++;
            }
            else if (Aux == 'D')
            {
                Pd[X]++;
            }

            if (Pe[X] > 0 && Pd[X] > 0)
            {
                n++;

                Pe[X]--;
                Pd[X]--;
            }
        }
        cout << n << endl;
        n = 0;
    }
    return 0;
}