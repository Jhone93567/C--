#include<iostream>

using namespace std;

int hash2(int k, int i, int m, int c1, int c2)
{
    int h;

    h = k % m;

    if(h < 0)
    {
        h = ((h + m) + (c1*i) + (c2*(i*i))) % m;
    }
    else
    {
        h = (h + (c1*i) + (c2*(i*i))) % m;
    }

    return h;
}

int main()
{
    int k,m,c1,c2;

    cin >> k >> m >> c1 >> c2;

    for (int i = 0; i < m; i++)
    {
        cout << hash2(k,i,m,c1,c2) << " ";
    }

    cout << endl;

    return 0;
}