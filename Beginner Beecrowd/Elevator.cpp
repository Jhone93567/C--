#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int L;
	int C;
	int R1;
	int R2;
	int D;

	cin >> L >> C >> R1 >> R2;

	while(L != 0 && C != 0 && R1 != 0 && R2 != 0)
	{
		if(R2 > R1)
			D = R2 * 2;
		else
			D = R1 * 2;

		if(sqrt(pow(((double)L - R1 - R2), 2) + (pow(C - R1 - R2, 2))) >= R1 + R2 && D <= C && D <= L)
		{
			cout << "S" << endl;
		}
		else
		{
			cout << "N" << endl;
		}
		cin >> L >> C >> R1 >> R2;
	}

	return 0;
}
