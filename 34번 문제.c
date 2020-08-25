#include <stdio.h>
#include <string.h> 

int main(){
	char n[40];
    scanf("%d",&n);
	printf("%x\n",n);  
    

    strupr(n);
    printf("%s\n", n);
    return 0;
}
