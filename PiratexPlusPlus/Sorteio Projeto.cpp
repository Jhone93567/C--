#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int sorteio(int a, int b)
{
	int sort;
	sort = rand()%(b+1); //sorteia um numero q vai ate b	
	while(sort < a)
	{
	   sort = rand()%(b+1); //sorteia um numero q vai ate b	
	}
	return sort;
	
}
int main(){
	int x, y; //extremos da lista
	int s; //sorteado
	
	cin >> x >> y;
	
	srand(time(NULL)); //inicializa a semente do gerador de numeros aleaorios
	
	s = sorteio(x,y);
	
	cout << s << endl;
	
	return 0;
}