#include <stdio.h>

int function(int x, int y){
	if (x==y)
	return 0;
	else
	return 1;
}
int main(){
	int a;
	int b;
	int res;
	
	printf("Insert A element:\n");
	scanf("%d",&a);
	printf("Insert B element:\n");
	scanf("%d",&b);
	res = function(a,b);
	if(res==0)
	printf("These numbers are equals");
	else
	printf("These numbers are differents");
}