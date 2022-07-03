#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
	int codigo;
	int indicador;
	int indicador2=1;
	int quant=0;
	string nomefinal[20];
	float valorfinal[20];
	int quantfinal[20];
	int i=0;
	
	typedef struct itens{
		string nome;
		float valor;
	} item;
	
	item Produtos;
	
	item estoque(int cod){
		switch(cod){
			
		case 100:
			Produtos.nome="Esponja ";
			Produtos.valor=2.20;
			break;
		case 101:
			Produtos.nome="Papel Higienico ";
			Produtos.valor=1.52;
			break;
		case 200:
			Produtos.nome="Sabao em Barra ";
			Produtos.valor=5.00;
			break;
		case 201:
			Produtos.nome="Biscoito ";
			Produtos.valor=0.57;
			break;
		}return Produtos;
	} 

int main(){
	cout<<"                    SUPERMERCADOS QUEIBOS\n                       CAIXA 01 - PDV   \n";
	do{ 
		
	cout<<"INSIRA O CODIGO DO PRODUTO: ";
	cin>>codigo;
	system("cls");
	cout<<"                    SUPERMERCADOS QUEIBOS\n                       CAIXA 01 - PDV   \n";
	cout<<"Produto: "<<estoque(codigo).nome;
	cout<<"\nValor unitario: "<<estoque(codigo).valor;
	cout<<"\nInforme a quantidade: ";
	cin>>quant;
	cout<<"CONFIRMA? DIGITE 1: ";
	cin>>indicador;
	if(indicador==1){
		nomefinal[i]=(estoque(codigo).nome);
		valorfinal[i]=(estoque(codigo).valor);
		quantfinal[i]=quant;

	}
	system("cls");
	cout<<"Deseja inserir outro produto? Digite 1: ";
	cin>>indicador2;
	system("cls");
	i++;
	} while (indicador2==1);
	system("cls");
	cout<<"Produtos escolhidos: \n";
	for(int cont=0;cont<i;cont++){
	cout<<nomefinal[cont]<<" Quantidade: "<<quantfinal[cont]<<" Valor: "<<valorfinal[cont]*quantfinal[cont]<<"\n";
	
	}
}