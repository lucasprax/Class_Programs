#include <string>
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int entrada;
int indicador=1;
int genero;
float altmae;
float altpai;
float valor;
int pag;
int cartao;
string nome;
int cvv;
int parcelas;

void formas(){
	cout<<"       FORMAS DE PAGAMENTO       "<<endl;
	cout<<"---------CARTOES FISICOS---------"<<endl;
	cout<<"CARTOES DE CREDITO E DEBITO VISA"<<endl;
	cout<<"CARTOES DE CREDITO E DEBITO MASTERCARD"<<endl;
	cout<<"CARTOES DE CREDITO E DEBITO ELO"<<endl;
	cout<<"CARTOES DE CREDITO HIPER"<<endl;
	cout<<"CARTOES DE CREDITO AMERICAN EXPRESS"<<endl;
	cout<<"--------OUTROS PAGAMENTOS--------"<<endl;
	cout<<"PIX"<<endl;
	cout<<"APPLE PAY"<<endl;
	cout<<"GOOGLE PAY"<<endl;
	cout<<"SAMSUNG PAY"<<endl;
	cout<<"VALES REFEICAO SODEXO, ALELO E VR"<<endl;
	cout<<"PICPAY, PAYPAL, MERCADOPAGO"<<endl;
}
void restaurante(){
	cout<<"       BEM-VINDO A SESSAO DOS PRATOS       "<<endl;
	cout<<"---------FAST---------"<<endl;
	cout<<"SANDUICHE BIGWOW GRELHADO COM BATATA"<<endl;
	cout<<"PARMEGIANA DE CARNE DE SOL AO PONTO - TAMANHO FAMILIA"<<endl;
	cout<<"ESCONDIDINHO DE CARNE DE SOL - TAMANHO PEQUENO"<<endl;
	cout<<"PIZZAS POR FATIA"<<endl;
	cout<<"PAES ARABES COM RECHEIO DA CASA"<<endl;
	cout<<"---------ALMOCOS---------"<<endl;
	cout<<"FILE DE FRANGO"<<endl;
	cout<<"TILAPIA"<<endl;
	cout<<"ARROZ REFOGADO"<<endl;
	cout<<"FEIJAO CARIOCA"<<endl;
	cout<<"ARROZ DE LEITE"<<endl;
}
void camisetas(){
	cout<<"       BEM-VINDO A LOJA DOS HEROIS       "<<endl;
	cout<<"---------MARVEL---------"<<endl;
	cout<<"CAMISETA THOR EM ASGARD 139.90 R$"<<endl;
	cout<<"CAMISETA VINGADORES GUERRA INFINITA 99,90 R$"<<endl;
	cout<<"CAMISETA HOMEM-ARANHA MILES MORALES 159,50 R$"<<endl;
	cout<<"CAMISETA THE PUNISHER 99,90R$"<<endl;
	cout<<"CAMISETA CAPITAO AMERICA 199,90R$"<<endl;
	cout<<"-----------DC-----------"<<endl;
	cout<<"CAMISETA BATMAN BEGINS 159.90 R$"<<endl;
	cout<<"CAMISETA LANTERNA VERDE 109,90 R$"<<endl;
	cout<<"CAMISETA SUPERMAN 199,90 R$"<<endl;
	cout<<"CAMISETA WONDERWOMAN 199,90 R$"<<endl;
}
void altura(){
	cout<<"       BEM-VINDO AO UTILITARIO DE ALTURA       "<<endl;
	cout<<"E Homem[1] ou mulher[2]? ";
	cin>>genero;
	cout<<"Qual a altura do pai? ";
	cin>>altpai;
	cout<<"Qual a altura da mae? ";
	cin>>altmae;
	if(genero==1){
		cout<<"Altura ideal e: "<<((altpai+13)+(altmae))/2;
	} else if (genero==2){
		cout<<"Altura ideal e: "<<((altpai-13)+(altmae))/2;
	}
}
void pagamentocaixa(){
	cout<<"       CAIXA 01         "<<endl;
	cout<<"Insira o valor gasto: ";
	cin>>valor;
	cout<<"Deseja saber as formas de pagamento aceitas? Se sim digite 1, se nao digite 0: ";
	cin>>pag;
	if(pag==1){
		formas();
	}
	cout<<"Deseja pagar por cartao? [1], Pix [2], Carteiras virtuais [3]: ";
	cin>>pag;
	switch(pag){
		case 1:
			system("cls");
			cout<<"Insira os digitos do seu cartao: ";
			cin>>cartao;
			cout<<"Insira o nome do titular: ";
			cin>>nome;
			cout<<"Digite o CVV [3 digitos]: ";
			cin>>cvv;
			cout<<"Deseja parcelar? ";
			cin>>parcelas;
			cout<<"Valor total: "<<valor/parcelas<<endl;
			cout<<"Processando"<<endl<<"Pagamento Efetuado"<<endl;
			break;
		case 2:{
			system("cls");
			cout<<"Uma chave aleatoria do pix sera criada"<<endl;
			srand((unsigned)time(0));
      	  	  int maior = 10000000000;
      	  	  int menor = 1000000000;
      	  	  int aleatorio = rand()%(maior-menor+1) + menor;
      	  	  cout << "Chave = " << aleatorio << endl;
      	  	  cout<<"Processando"<<endl<<"Pagamento Efetuado"<<endl;
      	  	  break;}
		case 3:
			system("cls");
			cout<<"Para pagar por esses meios, va ate o app das carteiras digitais e escolha a opcao 'PAGAR NO EASYPAY'";
			break;
	}
}

int main(){
	do{
	system("cls");
	cout<<"       ESCOLHA UMA DAS OPCOES DO MENU       "<<endl;
	cout<<"[1]FORMAS DE COMPRA"<<endl;
	cout<<"[2]RESTAURANTE SELF SERVICE"<<endl;
	cout<<"[3]LOJA DE CAMISETAS"<<endl;
	cout<<"[4]CALCULO DE ALTURA"<<endl;
	cout<<"[5]PAGAMENTO NO CAIXA"<<endl;
	cout<<"[6]SAIR DO PROGRAMA"<<endl;
	cin>>entrada;
	
	system("cls");
	switch(entrada){
		case 1:
			formas();
			cout<<"----------RETORNO----------"<<endl;
			cout<<"PRESSIONE 1 PARA RETORNAR AO MENU PRINCIPAL"<<endl;
			cin>>indicador;
			break;
		case 2:
			restaurante();
			cout<<"PRESSIONE 1 PARA RETORNAR AO MENU PRINCIPAL"<<endl;
			cin>>indicador;
			break;
		case 3:
			camisetas();
			cout<<"PRESSIONE 1 PARA RETORNAR AO MENU PRINCIPAL"<<endl;
			cin>>indicador;
			break;
		case 4:
			altura();
			cout<<"\nPRESSIONE 1 PARA RETORNAR AO MENU PRINCIPAL"<<endl;
			cin>>indicador;
			break;
		case 5:
			pagamentocaixa();
			cout<<"PRESSIONE 1 PARA RETORNAR AO MENU PRINCIPAL"<<endl;
			cin>>indicador;
			break;
		case 6:
			exit(0);
	}
	} while (indicador==1);
	
}