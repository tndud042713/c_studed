#include<stdio.h>
#include<stdbool.h>

bool isPrimeNumber(int x){
	for(int i=2; i<x; i++){
		if(x%i==0) return false; //�ѹ��̶� ����� �߰ߵǸ� false
	}
	return true;
}

int main(void){
	printf("%d",isPrimeNumber(100));
	return 0;
}
