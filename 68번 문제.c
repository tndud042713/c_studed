#include<stdio.h>

int main(void){
	int a;
	scanf("%d",&a);
	assess(a);
}
void assess(int x){
	if(x>=90)
	printf("A");
	else if(x<=89&&x>=70)
	printf("B");
	else if(x<=69&&x>=40)
	printf("C");
	else
	printf("D");
}
