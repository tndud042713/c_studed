#include<stdio.h>

int main(void)
{
	int i,j,temp;
	int array[10];
	//배열에 숫자를 입력하는 프로그램 
	printf("지금부터 배열에 숫자를 설정하겠습니다.\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	//내가 배열에다가 설정한 수를 보여줌 
	printf("내가 배열에 설정한 수는:");
	for(i=0;i<10;i++)
	{
		printf("%5d",array[i]);
	} 
	printf("  입니다.\n");
	printf("지금부터 버블정렬을 시작합니다.\n");	
	for(j=0;j<10;j++)
	{
		for(i=0;i<9-j;i++)
		{
				if(array[i]>array[i+1])
					{
						temp=array[i];
						array[i]=array[i+1];
						array[i+1]=temp;
					}
		}
	} 
	
	printf("버블정렬을 마친뒤 배열의 수는:");
	for(i=0;i<10;i++)
	{
		printf("%5d",array[i]);
	}
	printf("입니다.\n"); 
	
	return 0;
}
