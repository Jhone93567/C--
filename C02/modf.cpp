#include <iostream>
#include <cmath>

using namespace std;

int main()
{

float x, fracpart, intpart;

x = 3.14;

fracpart = modf(x , &intpart);

cout << "Parte inteira: " << intpart << endl;
cout << "Parte fracional: " << fracpart << endl;

return 0;
}