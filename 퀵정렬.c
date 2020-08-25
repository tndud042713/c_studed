#include<stdio.h>

int number,data[1000001];

void quickSort(int *data, int start, int end){
	if(start>=end){//원소가 1개인 경 우
	   return;		
	}
	
	int key = start;//키는 첫번째 원소 
	int i= start +1;
	int j= end;
	int temp;//위치를 바꾸는 임시 변수 
	
	while(i <= j){//엇갈릴 때까지 반복
			while(data[i] <= data[key]){//키 값보다 큰 값을 만날때 까지 오른쪽으로 이동
				i++;
			}
			while(data[j] >= data[key] && j > start ){ //키 값보다 큰 값을 만날때 까지
			//왼쪽으로 이동
				j--;
			}
			if(i > j){
				temp = data[j]; 
				data[j] = data[key];
				data[key] = temp;
			}else{
				temp = data[j];
				data[j] = data[i];
				data[i] = temp;
			}
	} 
	
	quickSort(data,start,j-1);
	quickSort(data,j+1,end);
}

int main(void){
	scanf("%d",&number);
	for(int i=0;i<number;i++){
		scanf("%d",&data[i]);
	}
	quickSort(data,0,number-1);
	for(int i=0 ; i<number; i++){
		printf("%d\n",data[i]);
	} 	
}
