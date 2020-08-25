#include<stdio.h>
#include<string.h>

int main(void)
{
	FILE *fp;
	char carr[]="this is sample program";
	char buffer[25];
	fp=fopen("sample29-2.txt","w+");
	fwrite(carr,strlen(carr)+1,1,fp);
	fread(buffer,strlen(carr)+1,1,fp);
	printf("%s\n",buffer);	
	
}
