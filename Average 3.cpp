#include <iostream>

using namespace std;

int main()
{
	float N1;
	float N2;
	float N3;
	float N4; //quatro notas com 1 casa depois da virgula

	float MD; //media

	float NE; // nota do exame de recuperaçao

	cin >> N1 >> N2 >> N3 >> N4; //entrada das notas
	
	N1 = N1 * 2;
	N2 = N2 * 3;
	N3 = N3 * 4; //notas com peso 2,3,4 e 1 respectivamente

	MD = (N1 + N2 + N3 + N4) / 10;

		 cout << fixed;
	cout.precision(1); // imprime as respostas com 1 casa apos a virgula

	if(MD >= 7.0) //se a media for maior que 7 ele esta aprovado
	{
		cout << "Media: " << MD << endl;
		cout << "Aluno aprovado." << endl;

	}
	else if(MD < 7.0 && MD >= 5.0) // se a media for entre 7 e 5 ele esta de recuperação
	{
		cout << "Media: " << MD << endl;
		cout << "Aluno em exame." << endl;
		cin >> NE;
		cout << "Nota do exame: " << NE << endl; // entrada da nota de recuperação
		if ((MD + NE) / 2 >= 5.0)
			cout << "Aluno aprovado." << endl; // se a media dela com a outra media for maior que 5 ele esta aprovado
		else
			cout << "Aluno reprovado." << endl; // caso contrario reprovado
		cout << "Media final: " << (MD + NE) / 2 << endl;
	}
	else
	{
		cout << "Media: " << MD << endl; // se a nota for menor que 5, ele reprova direto
		cout << "Aluno reprovado." << endl;
	}
	return 0;
}
