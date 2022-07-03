#include <stdio.h>

//------------------------------------------------------------------------------------------//
//------------------------PROGRAMA DE PROPRIEDADE DE LUCAS PRAXEDES-------------------------//
//------------------ATIVIDADE FINAL DO SEMESTRE DO PROFESSOR CHICO DANTAS-------------------//
//----------------------UNIVERSIDADE DO ESTADO DO RIO GRANDE DO NORTE-----------------------//
//--------------TODOS OS DIREITOS RESERVADOS AO AUTOR E UTILIZADOR DE BOA FE----------------//
//------------------------------------------------------------------------------------------//

//----------------------------CONTACT ME: lucaspraxlt@gmail.com-----------------------------//
//Nesta linha abaixo, deixo que possa escolher a quantidade de contatos permitida
int quant_contatos = 3;
//Definicao do conteudo do Struct principal
typedef struct {
	char nome[40];
	char telefone[15];
	char celular[15];
	char email[40];
	char aniver[5];
} Contato;

//Funcao de inserir contatos
Contato insere_contato(){
	Contato contato;
		//(POR ALGUM MOTIVO INEXPLICAVEL, ESSA LINHA ABAIXO NAO FUNCIONA, IGNORE ESSE GETCHAR)
			getchar();
		
		//NOME
			//Vamos limpar o nome
				for (int i=0; i<40; i++){
					contato.nome[i]=NULL;
				}
			//Vamos coletar o nome do contato
			printf("\nInsira o nome do contato desejado: \n");
			for (int i=0; i<40; i++){
				contato.nome[i] = getchar();
				//Se a letra digitada for nada, ele vai para o proximo comando
				if(contato.nome[i]=='\n'){
					i=40;
				}
			}
		//TELEFONE
			//Vamos limpar o numero
			for (int i=0; i<15; i++){
				contato.telefone[i]=NULL;
			}
			//Vamos coletar o telefone do contato
			printf("\nInsira o telefone do contato desejado: \n");
			for (int i=0; i<15; i++){
				contato.telefone[i] = getchar();
				//Se a letra digitada for nada, ele vai para o proximo comando
				if(contato.telefone[i]=='\n'){
					i=15;
				}
			}
			
		//CELULAR
			//Vamos limpar o numero
			for (int i=0; i<15; i++){
				contato.celular[i]=NULL;
			}
			//Vamos coletar o celular do contato
			printf("\nInsira o celular do contato desejado: \n");
			for (int i=0; i<15; i++){
				contato.celular[i] = getchar();
				//Se a letra digitada for nada, ele vai para o proximo comando
				if(contato.celular[i]=='\n'){
					i=15;
				}
			}
		//EMAIL
			//Vamos limpar o e-mail
			for (int i=0; i<40; i++){
				contato.email[i]=NULL;
			}
			//Vamos coletar o email do contato
			printf("\nInsira o e-Mail do contato desejado: \n");
			for (int i=0; i<40; i++){
				contato.email[i] = getchar();
				//Se a letra digitada for nada, ele vai para o proximo comando
				if(contato.email[i]=='\n'){
					i=40;
				}
			}
			//ANIVER
			//Vamos limpar a data
			for (int i=0; i<5; i++){
				contato.aniver[i]=NULL;
			}
			//Vamos coletar o aniversario do contato
			printf("\nInsira o aniversario do contato desejado:\nInsira o dia em dois digitos (XX):\n");
			for (int i=0; i<2; i++){
				contato.aniver[i] = getchar();
				//Se a letra digitada for nada, ele vai para o proximo comando
				if(contato.aniver[i]=='\n'){
					i=2;
				}
			}
			printf("\nInsira o mes em dois digitos (XX):\n");
			for (int i=2; i<5; i++){
				contato.aniver[i] = getchar();
				//Se a letra digitada for nada, ele vai para o proximo comando
				if(contato.aniver[i]=='\n'){
					i=5;
				}
			}
			for (int i=2; i<5; i++){
				contato.aniver[i] = getchar();
				//Se a letra digitada for nada, ele vai para o proximo comando
				if(contato.aniver[i]=='\n'){
					i=5;
				}
			}
			printf("Agora vamos retornar ao menu principal: \n");
			return contato;
}

void listar_contato(Contato cc[quant_contatos], int contt){
	for (int i=0; i < contt; i++){	
				printf("Contato %d:",i+1);
				//Esse outro for e para imprimir os valores vinculados aos 40 caracteres de c.nome
				printf("\n Nome: ");
				for (int j=0; j<40; j++){
					printf("%c",cc[i].nome[j]);
					if (cc[i].nome[j]==NULL){
						j=40;
					}
				}
				printf("Telefone: ");
				for (int j=0; j<15; j++){
					printf("%c",cc[i].telefone[j]);
					if (cc[i].telefone[j]==NULL){
						j=15;
					}
				}
				printf("Celular: ");
				for (int j=0; j<15; j++){
					printf("%c",cc[i].celular[j]);
					if (cc[i].celular[j]==NULL){
						j=15;
					}
				}
				printf("e-Mail: ");
				for (int j=0; j<40; j++){
					printf("%c",cc[i].email[j]);
					if (cc[i].email[j]==NULL){
						j=40;
					}
				}
				printf("Aniversario:\n  DIA:");
				for (int j=0; j<2; j++){
					printf("%c",cc[i].aniver[j]);
					if (cc[i].aniver[j]==NULL){
						j=2;
					}
				}
				printf(" MES:");
				for (int j=2; j<4; j++){
					printf("%c",cc[i].aniver[j]);
					if (cc[i].aniver[j]==NULL){
						j=4;
					}
				}

				printf("\n");
			}
}
void buscar_contato(Contato c[quant_contatos], int cont){
	Contato busca[1];
	int cont2 = 0;
	getchar();
	//Vamos limpar o nome
	for (int i=0; i<40; i++){
		busca[0].nome[i]=NULL;
	}
	printf("Insira o nome que quer buscar: ");
	for (int i=0; i<40; i++){
				busca[0].nome[i] = getchar();
				//Se a letra digitada for nada, ele vai para o proximo comando
				if(busca[0].nome[i]=='\n'){
					i=40;
				}
	}
	//Comparacao com o banco
	for (int i=0; i<quant_contatos; i++){
		cont2=0;
		for (int j=0; j<40; j++){
			if (busca[0].nome[j]==c[i].nome[j] || busca[0].nome[j] == NULL){
				cont2++;
				if(cont2>39){
					printf("FOI ENCONTRADO CORRESPONDENCIAS NO CONTATO %d",j);
					for (int w=0; w<40; w++){
					printf("%c",c[i].nome[w]);
					if (c[i].nome[w]==NULL){
						w=40;
					}
				}
				}
			}
		}
	}
	// if(cont2>39){
	// 	printf("FORAM ENCONTRADAS CORRESPONDENCIAS\n");
	// } else {
	// 	printf("NAO FORAM ENCONTRADAS CORRESPONDENCIAS\n");
	// }
}
//Comeca o programa principal
int main(){
	//Definimos a variavel que vai receber os retornos das funcoes
	Contato c[quant_contatos];
	//Variavel das instrucoes iniciais, definido em 1 pois nao pode ser zero senao o programa fecha
	int inst=1;
	//contador usado para acrescentar numero de contatos quando um e adicionado
	int cont=0;
	//comeco
	printf("BEM VINDO A AGENDA DE CONTATOS\n");
	//VAMOS LIMPAR O NOME GERAL
	for (int i=0; i<quant_contatos; i++){
		for (int j=0; j<40; j++){
			c[i].nome[j]=NULL;
		}
	}
	//Essa repeticao e para o programa retornar sempre que acabar uma funcao
	while(inst=!0){
		printf("Insira a opcao desejada:\n1 Para Inserir um contato\n2 Para Listar seus contatos\n3 Para buscar um contato\nOu digite 0 para sair\n");
		scanf("%d",&inst);
		//Condicoes das instrucoes
		if (inst==1){
			printf("Voce selecionou a opcao de inserir contato\n");
			//O retorno da funcao vai para a variavel c
			c[cont] = insere_contato();
			cont++;
		} else if (inst==2){
			printf("Voce selecionou a opcao de listar todos os contatos\n");
			//Esse for e para listar a quantidade de contatos existentes com base no numero inicial de contatos informados no quant_contatos
			listar_contato(c,cont);
		} else if (inst==3){
			printf("Voce selecionou a opcao de buscar contatos\n");
			buscar_contato(c,cont);
		} else if (inst==0){
			printf("Fim do programa");
			break;
		} else {
			printf("Opcao invalida, tente de novo\n");
		}
	}
}