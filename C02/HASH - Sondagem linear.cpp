#include<iostream>

using namespace std;

int hash1(int k, int i, int m)
{
    int h;

    h = k % m;

    if(h < 0)
    {
        h = ((h + m) + i) % m;
    }
    else
    {
        h = (h + i) % m;
    }

    return h;
}

int main()
{
    int k,m;

    cin >> k >> m;

    for (int i = 0; i < m; i++)
    {
        cout << hash1(k, i, m) << " ";
    }
    
    cout << endl;

    return 0;
}