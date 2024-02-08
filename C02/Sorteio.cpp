#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
	   int n;
	   
	   srand (time(NULL));
	   n = rand() % 63;
	   cout << n << endl;	
	
	return 0;
}