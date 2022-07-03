#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	float alturapessoa;
	float distmenor;
	float distmaior;
	cout<<"UTILITARIO DE MEDICAO PARA ENGENHARIA\nInstrucoes:\n";
	cout<<"Para a boa utilizacao deste, ponha-se de pe no limiar da sombra do predio e calcule sua altura e \na distancia dos seus pes ao final da sombra\n";
	cout<<"Informe a sua altura: ";
	cin>>alturapessoa;
	cout<<"Informe a distancia entre seu pe e o fim da sombra: ";
	cin>>distmenor;
	cout<<"Informe a distancia do predio ate o fim da sombra: ";
	cin>>distmaior;
	cout<<"A altura do predio e: "<<(alturapessoa*distmaior)/distmenor;
	
}