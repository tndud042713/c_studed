#include <stdio.h>
#include <string.h> 

int main(){
	int n;
	char str2[100];
    scanf("%d",&n);
    char str2[100]=(char)n;
    
    strupr(str2);
	printf("%s\n",str2);  
    
    

   
    //printf("aBcDeF => %s\n", str2);
    return 0;
}
