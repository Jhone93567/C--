#include <iostream>

using namespace std;

int main()
{
    int N;
    int R;
    int X[10001];
    int i;

    while (cin >> N && cin >> R)
    {
        for (i = 1; i <= N; i++)
        {
            X[i] = 0;
        }
        for (int n = 0; n < R; n++)
        {
            cin >> i;

            X[i] = 1;
        }
        if (N == R)
        {
            cout << "*" << endl;
        }
        else
        {
            for (int n = 1; n <= N; n++)
            {
                if (X[n] == 0)
                {
                    cout << n << " ";
                }
            }
            
            cout << endl;

        }
    }
    return 0;
}