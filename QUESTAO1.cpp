#include <iostream>
#include <string.h>
using namespace std;

	int codigo;
	int quantidade;
	
	typedef struct itens{
		string nome;
		float valor;
	} estrutura;
	
	
	estrutura funcao1(int cod){
	estrutura produto[20];
	//ITEM 1
    	produto[1].nome="Bolsa Chanel Couro Preta";
		produto[1].valor=829.90;
	//ITEM 2
		produto[2].nome="Camiseta DryFit Preta Adidas";
		produto[2].valor=132.90;
		
		cout<<"Produto:"<<produto[codigo].nome<<"\n";
		cout<<"Valor:"<<produto[codigo].valor<<" R$";
		cout<<"\n"; 
			return produto[cod];
	}
	void avista(float dinheiro){
		cout<<"Valor total: "<<dinheiro<<" R$ + 10% de Desconto: "<<dinheiro*0.90<<" R$";
	}
	
	void aprazo(float dinheiro){
		int parcelas;
		cout<<"Insira o numero de parcelas: ";
		cin>>parcelas;
		if (parcelas < 4 && parcelas > 0){
			cout<<"Valor do produto: "<<dinheiro<<" R$\nEm "<<parcelas<<" parcelas sem juros: "<<dinheiro/parcelas<<" R$";
		} else if (parcelas < 11 && parcelas > 3){
			cout<<"Valor do produto: "<<dinheiro<<" R$\nEm "<<parcelas<<" parcelas com juros de 5%: "<<(dinheiro/parcelas)*1.05<<" R$";
		}
	}
		
	
int main(){
    int opt;
	float valor1;
	
	cout<<"SISTEMA DE PDV - CAIXA 01\n";
	cout<<"Insira o codigo do produto\n";
	cin>> codigo;
	valor1=funcao1(codigo).valor;
	cout<<"Insira a quantidade\n";
	cin>>quantidade;
	float valortotal = valor1*quantidade;
	cout<<"Escolha a forma de pagamento\n1- A Vista\n2- A prazo\n";
	cin>>opt;
	switch(opt){
	case 1:
		avista(valortotal);
	case 2:
		aprazo(valortotal);	
	}
		
	
}