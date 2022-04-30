#include <stdio.h>

typedef struct Ponto{
	int x;
	int y;
	}Ponto;
int main(){
	Ponto Main;
	printf("--------CODE CLASS LESSON, 29 APRIL--------\n-----USING STRUCT TO SIMPLIFY YOUR CODE----\n");
	printf("Insert the X variable from Ponto Struct: ");
	scanf("%d",&Main.x);
	printf("Insert the Y variable from Ponto Struct: ");
	scanf("%d",&Main.y);
	printf("Your X value is: %d\nAnd your Y value is: %d", Main.x, Main.y);
}