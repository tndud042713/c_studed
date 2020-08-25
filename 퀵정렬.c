#include<stdio.h>

int number,data[1000001];

void quickSort(int *data, int start, int end){
	if(start>=end){//���Ұ� 1���� �� ��
	   return;		
	}
	
	int key = start;//Ű�� ù��° ���� 
	int i= start +1;
	int j= end;
	int temp;//��ġ�� �ٲٴ� �ӽ� ���� 
	
	while(i <= j){//������ ������ �ݺ�
			while(data[i] <= data[key]){//Ű ������ ū ���� ������ ���� ���������� �̵�
				i++;
			}
			while(data[j] >= data[key] && j > start ){ //Ű ������ ū ���� ������ ����
			//�������� �̵�
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
