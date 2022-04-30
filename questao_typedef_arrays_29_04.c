#include <stdio.h>

typedef struct Ponto{
	int x;
	int y;
	}Ponto;
int main(){
	Ponto Main[4];
	printf("--------CODE CLASS LESSON, 29 APRIL--------\n-----USING STRUCT TO SIMPLIFY YOUR CODE----\n");
	for (int i=0; i<4; i++){
		printf("Insert the X variable from %d Array in the Ponto Struct: ",i+1);
		scanf("%d",&Main[i].x);
		printf("Insert the Y variable from %d Array in the Ponto Struct: ",i+1);
		scanf("%d",&Main[i].y);
	}
	for (int i=0; i<4; i++){
		printf("In the %d array element,\n Your X value is: %d\nAnd your Y value is: %d\n",i+1, Main[i].x, Main[i].y);
	}
}