#include <iostream>

using namespace std;

int calc_a(int x)
{
    x = 2 * (x * x) + 3 * x - 1;

    return x;
}

int calc_b(int x)
{
    x = x * x * x;

    return x;
}

int calc_c(int y)
{
    y = y * y * y;

    return y;
}

int main()
{
    int a, b, c, x, y;

    cin >> x >> y;

    a = calc_a(x);

    cout << "a = " << a << endl;

    b = calc_b(x);

    cout << "b = " << b << endl;

    c = calc_c(y);

    cout << "c = " << c << endl;

    return 0;
}
