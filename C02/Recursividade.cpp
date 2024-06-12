#include<iostream>

using namespace std;

int fib[9999];

int fibonacci(int n) // Recursividade e uma funcao que retorna ela mesma
{
    if (n<= 1)
        return 1;
    if (fib[n] != -1)
    {
        return fib[n];
    }
    

fib[n] = (fibonacci(n-1) + fibonacci(n-2));

return fib[n];
}

int main()
{
    for (int i = 0; i < 9999; i++)
    {
        fib[i] = -1;
    }
    

    int n;

    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}