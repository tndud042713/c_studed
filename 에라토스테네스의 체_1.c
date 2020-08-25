#include<stdio.h>
#include<stdbool.h>

bool isPrimeNumber(int x){
	for(int i=2; i<x; i++){
		if(x%i==0) return false; //한번이라도 약수가 발견되면 false
	}
	return true;
}

int main(void){
	printf("%d",isPrimeNumber(100));
	return 0;
}
