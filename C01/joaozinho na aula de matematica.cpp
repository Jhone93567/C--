#include <iostream>

using namespace std;

int main()
{
    int N;
    int tabuada[1001];

    cin >> N;
    
    for (int i = 0; i <= 10; i++)
    {
        tabuada[i] = N*i;

        cout << N << " x " << i << " = " << tabuada[i] << endl;
    }
    

    return 0;
}