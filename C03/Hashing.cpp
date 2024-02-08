#include<iostream>
#include <locale.h> 
using namespace std;

struct dado{
	int valor;
	int status;
};

int hash_aux(int k,int m){
	return k % m;	
}

int hash_aux2(int k,int m){
	return 1+(k % (m-1));	
}

int hash_linear(int k,int m, int i){
	return (hash_aux(k,m)+i)%m;	
}

int hash_quadratico(int k,int m, int i){
	int c1 = 1, c2 = 3;
	return (hash_aux(k,m)+i*c1+i*i*c2)%m;	
}

int hash_duplo(int k,int m, int i){
	return (hash_aux(k,m)+i*hash_aux2(k,m))%m;	
}

int insere_valor(dado tabela_hash[], int valor, int m){
	int pos = -1, i = 0;
	while(i<m){
		//pos = hash_linear(valor, m, i);
		//pos = hash_quadratico(valor, m, i);
		pos = hash_duplo(valor, m, i);
		if(tabela_hash[pos].status != 1){
			tabela_hash[pos].valor = valor;
			tabela_hash[pos].status = 1;
			break;
		}
		i++;
	}
	return pos;	
}

int main(){
	setlocale(LC_ALL,"");
	
	int m = 20;
	dado tabela_hash[m];
	
	for(int i=0;i<m;i++){
		tabela_hash[i].valor = -1;
		tabela_hash[i].status = 0;
	}
	char op = 's';
	int elemento;
	while(op != 'n'){
		cout<<"Digite um número para inserir na tabela hash: ";
		cin>>elemento;
		int pos = insere_valor(tabela_hash, elemento, m);
		if(pos != -1)
			cout<<"Elemento inserido na posição "<<pos<<endl;
		else{
			cout<<"Tabela cheia!";
			break;
		}		
		cout<<"Desaja inserir um novo número na tabela? (s/n) ";
		cin>>op;
	}
	
	
	for(int i=0;i<m;i++){
		cout<<"Posição "<<i<<": ";
		if(tabela_hash[i].status == 1)
			cout<<tabela_hash[i].valor;
		else if(tabela_hash[i].status == 2)
			cout<<"Valor deletado.";
		else
			cout<<"Vazia.";
		cout<<endl;
	}
	
return 0;
}