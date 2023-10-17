#include <iostream>
#include <string>
#define CURSOS 7
using namespace std;

string cursos[CURSOS] = {"GEC", "GES", "GEB", "GET", "GEE", "GEP", "GEA"};

typedef struct aluno{
	int matricula;
	string nome;
	int curso;
} Aluno;

void troca(Aluno &a, Aluno &b){
	Aluno temp = a;
	a = b;
	b = temp;
	return;
}

int encontra_menor_matricula(Aluno vetor[], int n, int inicio){ // 2 + 3 + 3(n - 1) + 3 + 3(n - 1) + 7(n - 1) + 1
	int menor = inicio;
	for(int i=inicio+1;i<n;i++){
		if(vetor[i].matricula < vetor[menor].matricula)
			menor = i;
	}
	return menor;
}

void ordena1(Aluno vetor[], int n){ // Assintotica: N^2
	for(int i=0;i<n;i++){
	   int menor = encontra_menor_matricula(vetor, n, i);
	   troca(vetor[i], vetor[menor]);
	}
	
}

int divide(Aluno vetor[], int inicio, int fim){ // O(N)
	int metade = (inicio+fim)/2;
	int i=inicio, j=fim;
	while(i <= j){
		while(vetor[i].matricula < vetor[metade].matricula && i<fim)
			i++;
		while(vetor[j].matricula > vetor[metade].matricula && j>inicio)
			j--;
		troca(vetor[i], vetor[j]);
		i++;
		j--;
	}
	return i;
}

Aluno busca_aluno(Aluno vetor[], int n, int matricula_buscada){ // 4 + log(n) * (3 + 5 + 4 + 4 + 3) = 19 log(n) + 4 
	int inicio = 0, fim = n-1;
	int metade;
	
	while(inicio <= fim){
		metade = (inicio+fim)/2;
		if(vetor[metade].matricula == matricula_buscada){
			return vetor[metade];
		} else if(vetor[metade].matricula > matricula_buscada){
			inicio = metade + 1;			
		} else {
			fim = metade - 1;
		}
	}
	return;
	
}

int alunos_curso(Aluno vetor[], int n, int curso){ // Analise RAM: 3 + 1 + 3(n+1) + 3n + 7n = 13n + 7
	cout<<"Alunos do curso "<<cursos[curso]<<":"<<endl;
	for(int i=0;i<n;i++){
		if(vetor[i].curso == curso)
			cout<<vetor[i].nome<<endl;
	}
}

void ordena2(Aluno vetor[], int inicio, int fim){ // Teorema mestre: a=2 b=2 d=1, caso 1 entao: O(n log(n))
	if(inicio >= fim)
		return;
	int metade = divide(vetor,inicio,fim);
	ordena2(vetor,inicio,metade-1);
	ordena2(vetor,metade+1,fim);	
}

int main(){
	
	Aluno alunos[1000];
	
	int n;
	cout<<"Informe a quantidade de alunos: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Cursos:";
		for(int j=0;j<CURSOS;j++)
			cout<<" |"<<j<<": "<<cursos[j]<<"| ";
		cout<<"\n\nMatricula: ";
		cin>>alunos[i].matricula;
		cout<<"Nome: ";
		cin.ignore();
		getline(cin, alunos[i].nome);
		cout<<"Curso(0 a 6): ";
		cin>>alunos[i].curso;
		cout<<endl;
	}
	
	cout<<"Lista em ordem de matricula:"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<alunos[i].nome<<endl;
	}
	
	int op;
	cout<<"\nInforme o curso que deseja visualizar: ";
	cin>>op;
	cout<<endl;
	
	alunos_curso(alunos,n,op);
	
	
	cout<<"\nInforme o aluno que deseja visualizar: ";
	cin>>op;
	cout<<endl;
	
	Aluno aluno = busca_aluno(alunos,n,op);
	cout<<"Nome: "<<aluno.nome<<endl;
	cout<<"Curso: "<<cursos[aluno.curso]<<endl;
	
	return 0;
}