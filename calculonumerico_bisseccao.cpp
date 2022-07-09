#include <iostream>
#include <math.h>
#include <stdio.h>
//declaração de variáveis
using namespace std;

double f(double x){
	return (x*log(x))-3.2; //Função dedicada para o cálculo da função
}

int main(){
	setlocale(LC_ALL, ""); //Permite acentuação portuguesa
	float a, b, x, E=0.01; //a e b são intervalos iniciais e finais, x são os novos limites divididos ao meio, e o E é a tolerância de erro
	int k=1; //Contagem de iteração
	int limite=100; //Limite de contagem de iteração
	
	cout<<"------SEJA BEM VINDO À FERRAMENTA DE CÁLCULO DE RAÍZES POR BISSECÇÃO------"<<endl;
	cout<<"--------APLICAÇÃO PROJETADA POR TALYSSON MEDEIROS E LUCAS PRAXEDES--------"<<endl;
	cout<<"-------Obs.: Edite a função a qualquer momento na linha 08 do código------"<<endl;
	cout<<"---------CRÉDITOS À UNIVERSIDADE ESTADUAL DO RIO GRANDE DO NORTE----------"<<endl<<endl;
	
	cout<<"Informe o valor inicial: ";
	cin>>a;
	cout<<"Informe o valor final: ";
	cin>>b;
	
	x=(a+b)/2; //Separa a diferença dos intervalos no meio
	cout<<"\nNa iteração "<<k<<" O limite inferior é "<<a<<" e o limite superior é "<<b<<endl;
	while (fabs((f(x)))>E){ //Pega o módulo da função f() aplicada no novo intervalo e vê se está dentro da margem de erro
		if((f(x))>0){
			b=x; //Se tiver positivo, o limite inferior é dividido
			
		}
		else{
			a=x; //Se tiver negativo, o limite superior é dividido
		}
		cout<<"Na iteração "<<k+1<<" O limite inferior é "<<a<<" e o limite superior é "<<b<<endl;
		x=(a+b)/2; //Faz novamente a metade do intervalo para a próxima sequência
		k++; //Acrescenta contagem na iteração
		if (k==limite) //Se a contagem extrapolar o limite, encerre e diga que não existe raízes
		{
			system("cls");
			cout<<"RAIZ INEXISTENTE NESTE INTERVALO"<<endl;
			break;
		}
	}
	
	cout<<"a raiz aproximada é: "<<x<<" e seu erro é de: "<<f(x)<<"\nNúmero de iterações: "<<k;;
	
}
