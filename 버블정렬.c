#include<stdio.h>

int main(void)
{
	int i,j,temp;
	int array[10];
	//�迭�� ���ڸ� �Է��ϴ� ���α׷� 
	printf("���ݺ��� �迭�� ���ڸ� �����ϰڽ��ϴ�.\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	//���� �迭���ٰ� ������ ���� ������ 
	printf("���� �迭�� ������ ����:");
	for(i=0;i<10;i++)
	{
		printf("%5d",array[i]);
	} 
	printf("  �Դϴ�.\n");
	printf("���ݺ��� ���������� �����մϴ�.\n");	
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
	
	printf("���������� ��ģ�� �迭�� ����:");
	for(i=0;i<10;i++)
	{
		printf("%5d",array[i]);
	}
	printf("�Դϴ�.\n"); 
	
	return 0;
}
