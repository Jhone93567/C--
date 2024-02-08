#include <iostream>

using namespace std;

int h1(int k, int m)
{
    if (k >= 0)
    {
        return k % m;
    }
    else
    {
        return (k % m) + m;
    }
}

int h2(int k, int m)
{
    if (k >= 0)
    {
        return 1 + (k % (m - 1));
    }
    else
    {
        return (1 + (k % (m - 1))) + m;
    }
}

int dhash(int k, int m, int i)
{
    return (h1(k, m) + (i * h2(k, m))) % m;
}

int main()
{
    int k, m;

    cin >> k >> m;

    for (int i = 0; i < m; i++)
    {
        cout << dhash(k, m, i) << " ";
    }

    cout << endl;

    return 0;
}