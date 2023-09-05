#include<iostream>
#include<string>
using namespace std;

struct aluno {
	int matricula;
	string nome;
	int idade;
};

aluno cria_aluno(){ // Complexidade da funcao = 4
	aluno a;
	cin>>a.matricula; // 1 
	cin>>a.nome; // 1 
	cin>>a.idade; // 1 
	return a;	// 1 
}

int busca_seq_aluno_mat(aluno alunos[], int n, int mat){ // Complexidade = 10n + 4, sendo n o numero de repeticoes no pior caso
	   for(int i=0; i<n; i++){ // 1 + 3(n + 1) + 3n
		   if(mat == alunos[i].matricula){ // 4n
			   return i; // 0 pois no pior caso ele nn encontra nada
		   }
	   }
	   return -1;	
}

int busca_bin_aluno_mat(aluno alunos[], int n, int mat){ // 19log n + 8, sendo n o numero de repeticoes no pior caso
	int inicio = 0; // 1
	int fim = n - 1; // 3
	int meio = 0; // 1
	while(inicio <= fim) // 3log n + 3
	{
		meio = (inicio+fim)/2; // 5log n
		if(mat == alunos[meio].matricula){ // 4log n
			return meio; // 0		
		} else {
			if(mat > alunos[meio].matricula){ // 4log n
				inicio = meio + 1; // 3log n
			} else {
				fim = meio - 1; // 3lo n
			}
		}
	}
	return -1;
}

int busca_seq_aluno_nome(aluno alunos[], int n, string nome){ // 10*n + 4, sendo n o numero de repeticoes no pior caso
	   for(int i=0; i<n; i++){ //1 + 3(n + 1) + 3n
		   if(nome == alunos[i].nome){ // 4n
			   return i; // 0
		   }
	   }
	   return -1;	
}

int busca_seq_aluno_idade(aluno alunos[], int n, int idade){ // 6 + 13*n, sendo n o numero de repeticoes no pior caso
	   int contador = 0; // 1
	   for(int i=0; i<n; i++){ // 1 + 3(n + 1) + 3n
		   if( alunos[i].idade <= idade){ // 4n
			   contador++; // 3n
		   }
	   }
	   return contador;	// 1
}


int main(){

	int n;
	
	cin>>n;
	
	aluno alunos[n];

	for(int i=0;i<n;i++){
		alunos[i] = cria_aluno();
	}
	
	int mat = 6;
	int resultado = busca_seq_aluno_mat(alunos, n, mat);
	
	if(resultado != -1){
		cout<< alunos[resultado].nome <<endl;
		cout<< alunos[resultado].matricula <<endl;
		cout<< alunos[resultado].idade <<endl;
	} else {
		cout << "Aluno nao encontrado!" << endl;
	}
	
	string nome = "Jonas";
	resultado = busca_seq_aluno_nome(alunos, n, nome);
	
	if(resultado != -1){
		cout<< alunos[resultado].nome <<endl;
		cout<< alunos[resultado].matricula <<endl;
		cout<< alunos[resultado].idade <<endl;
	} else {
		cout << "Aluno nao encontrado!" << endl;
	}
	
	int idade_buscada = 15;
	
	resultado = busca_seq_aluno_idade(alunos,n,idade_buscada);
	
	cout << "Existe(m) " << resultado; 
	cout << " aluno(a)(s) com essa idade ou menor" << endl;
	
	
	mat = 6;
	resultado = busca_bin_aluno_mat(alunos, n, mat);
	
	if(resultado != -1){
		cout<< alunos[resultado].nome <<endl;
		cout<< alunos[resultado].matricula <<endl;
		cout<< alunos[resultado].idade <<endl;
	} else {
		cout << "Aluno nao encontrado!" << endl;
	}

	
	return 0;	
}