#include<stdio.h>
#include<string.h>
#define MAXSIZE 300

void sort(char arr[][MAXSIZE])//�ٲٴ� ���Ҹ� �ϱ� ������ return ���� ����. 
{
	int i,j;
	char temp[MAXSIZE]={0};//�� �迭���� 0������ �ʱ�ȭ ���ش�.
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(strcmp(arr[i],arr[j])>0){
				/*�������� ���������� ���� j�� ��� �ڿ��ִ� ���ڿ�
				�� �̹Ƿ� �ڿ� �ִ� ���ڿ��� �տ� �ִ� ���ڿ� ����
				���������δ� ������ ���ߵ� ���*/
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);				
			}						
		}
	} 
}

int main(void)
{
	char addr[10][MAXSIZE];
	int i;
	FILE *fp1 = fopen("addsource.txt","r");
	FILE *fp2 = fopen("addsort.txt","w+");
	for(i=0;i<10;i++)
	  fgets(addr[i],MAXSIZE,fp1);
	sort(addr);
	for(i=0;i<10;i++)
	  fputs(addr[i],fp2);
	
	printf("�۾��� �Ϸ�Ǿ����ϴ�.\n"); 
} 
