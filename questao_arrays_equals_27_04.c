#include <stdio.h>

int function(int a[],int b[], int size){
	int i;
	while (a[i]==b[i] && i<size){
		i++;
	}
	if(i==size){
		return 0;
	}
}
int main(){
	int a[3];
	int b[3];
	int res;
	printf("---------------------LESSON IN THE CLASS / APRIL 27 / LUCAS PRAXEDES---------------------\n-----------WHAT THIS PROGRAM DOES: CHECK TWO DIFFERENT ARRAYS AND COMPARE BOTH-----------");
	for (int i=0; i<3; i++){
		printf("\nInsert %d element of first array:\n",i+1);
		scanf("%d",&a[i]);
	}
	for (int i=0; i<3; i++){
		printf("\nInsert %d element of second array:\n",i+1);
		scanf("%d",&b[i]);
	}
	
	res = function(a,b,3);
	if(res==0)
	printf("These numbers are equals");
	else
	printf("These numbers are differents");
}