#include<stdio.h>
#include<string.h>
#define MAXSIZE 300

void sort(char arr[][MAXSIZE])//바꾸는 역할만 하기 때문에 return 값이 없다. 
{
	int i,j;
	char temp[MAXSIZE]={0};//각 배열들을 0값으로 초기화 해준다.
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(strcmp(arr[i],arr[j])>0){
				/*비교했을때 사전순으로 가면 j가 계속 뒤에있는 문자열
				열 이므로 뒤에 있는 문자열이 앞에 있는 문자열 보다
				사전순으로는 앞으로 가야될 경우*/
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
	
	printf("작업이 완료되었습니다.\n"); 
} 
