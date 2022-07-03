#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;


int main(){
   int codigo;
   float valorm, valorp, valorg;
   int quant_p = 0, quantg_p = 0;
   int quant_m = 0, quantg_m = 0;
   int quant_g = 0, quantg_g = 0;
   int opt;
   
   cout<<"LOJAS MAGAZINERUIZA & FAMILIA EIRELI\n";
   cout<<"   TRAZENDO FELICIDADE PARA VOCE    \n";
   cout<<"------------------------------------\n";
   cout<<"       CONTROLADOR DE VENDAS        \n";

   cout<<"Insira o valor do produto P: ";
   cin>>valorp;
   cout<<"Insira o valor do produto M: ";
   cin>>valorm;
   cout<<"Insira o valor do produto G: ";
   cin>>valorg;
   do{
   cout<<"Insira a quantidade de produtos de tamanho P vendidos: ";
   cin>>quant_p;
   quantg_p = quantg_p + quant_p;
   
   cout<<"Insira a quantidade de produtos de tamanho M vendidos: ";
   cin>>quant_m;
   quantg_m = quantg_m + quant_m;
   
   cout<<"Insira a quantidade de produtos de tamanho G vendidos: ";
   cin>>quant_g;
   quantg_g = quantg_g + quant_g;
   
   cout<<"Insira 0 para repetir ou qualquer outro numero para sair: ";
   cin>>opt;
   }while(opt==0);
   
   system("cls");
   cout<<"LOJAS MAGAZINERUIZA & FAMILIA EIRELI\n";
   cout<<"   TRAZENDO FELICIDADE PARA VOCE    \n";
   cout<<"------------------------------------\n";
   cout<<"   CONTROLADOR DE VENDAS - RESUMO   \n";
   cout<<"Voce vendeu no total: "<<(quantg_p+quantg_m+quantg_g)<<" Pecas\n";
   cout<<"Total de produtos P vendidos: "<<quantg_p<<" Pecas e arrecadado: "<<quantg_p*valorp;
   cout<<"\nTotal de produtos M vendidos: "<<quantg_m<<" Pecas e arrecadado: "<<quantg_m*valorm;
   cout<<"\nTotal de produtos G vendidos: "<<quantg_g<<" Pecas e arrecadado: "<<quantg_g*valorg;
   cout<<"\nValor total arrecadado: "<<quantg_p*valorp+quantg_m*valorm+quantg_g*valorg;
	return 0;

}