#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;

float taraprato = 0.400;
float peso;
 int main(){
	 cout<<"M3A SISTEMAS INFORMATICOS\nINSIRA O PESO: ";
	 cin>>peso;
	 float pesoreal = peso - taraprato;
	 system("cls");
	 cout<<"M3A SISTEMAS INFORMATICOS\nVEJA A COMPOSICAO DO VALOR\n";
	 cout<<"PESO TOTAL: "<<peso<<"\nPESO SEM O PRATO: "<<pesoreal<<"\nPRECO POR KG: 23,00 R$";
	 cout<<"\n\nVALOR FINAL:"<<23*pesoreal<<" R$";
	 
 }