#include <iostream>
#include <math.h>
#include <stdio.h>
//declara��o de vari�veis
using namespace std;

double f(double x){
	return (x*log(x))-3.2; //Fun��o dedicada para o c�lculo da fun��o
}

int main(){
	setlocale(LC_ALL, ""); //Permite acentua��o portuguesa
	float a, b, x, E=0.01; //a e b s�o intervalos iniciais e finais, x s�o os novos limites divididos ao meio, e o E � a toler�ncia de erro
	int k=1; //Contagem de itera��o
	int limite=100; //Limite de contagem de itera��o
	
	cout<<"------SEJA BEM VINDO � FERRAMENTA DE C�LCULO DE RA�ZES POR BISSEC��O------"<<endl;
	cout<<"--------APLICA��O PROJETADA POR TALYSSON MEDEIROS E LUCAS PRAXEDES--------"<<endl;
	cout<<"-------Obs.: Edite a fun��o a qualquer momento na linha 08 do c�digo------"<<endl;
	cout<<"---------CR�DITOS � UNIVERSIDADE ESTADUAL DO RIO GRANDE DO NORTE----------"<<endl<<endl;
	
	cout<<"Informe o valor inicial: ";
	cin>>a;
	cout<<"Informe o valor final: ";
	cin>>b;
	
	x=(a+b)/2; //Separa a diferen�a dos intervalos no meio
	cout<<"\nNa itera��o "<<k<<" O limite inferior � "<<a<<" e o limite superior � "<<b<<endl;
	while (fabs((f(x)))>E){ //Pega o m�dulo da fun��o f() aplicada no novo intervalo e v� se est� dentro da margem de erro
		if((f(x))>0){
			b=x; //Se tiver positivo, o limite inferior � dividido
			
		}
		else{
			a=x; //Se tiver negativo, o limite superior � dividido
		}
		cout<<"Na itera��o "<<k+1<<" O limite inferior � "<<a<<" e o limite superior � "<<b<<endl;
		x=(a+b)/2; //Faz novamente a metade do intervalo para a pr�xima sequ�ncia
		k++; //Acrescenta contagem na itera��o
		if (k==limite) //Se a contagem extrapolar o limite, encerre e diga que n�o existe ra�zes
		{
			system("cls");
			cout<<"RAIZ INEXISTENTE NESTE INTERVALO"<<endl;
			break;
		}
	}
	
	cout<<"a raiz aproximada �: "<<x<<" e seu erro � de: "<<f(x)<<"\nN�mero de itera��es: "<<k;;
	
}
