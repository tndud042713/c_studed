#include<stdio.h>
int main(void){
	int i=5,j=10;
	printf("초기상태 i = %d j= %d\n",i,j);
	num_change(i,j);
	printf("함수 실행 후i = %d j= %d\n",i,j);
}

int num_change(int i, int j){
	i+=5;
	j+=5;
}
