#include<stdio.h>

static int num=4;
static int INF=10000000;
int a[4][4]={
	{0,5,1000000,8}, 
	{7,0,9,1000000}, 
	{2,100000,0,4},
	{1000000,1000000,3,0},
};

void floydWarshall(){
	int number=4;
	int d[number][number];
	
	for(int i=0;i<number;i++){
		for(int j=0; j<number;j++){
			d[i][j] = a[i][j];
		}
	}
	
	for(int k=0; k<number; k++){
		for(int i=0; i<number; i++){
			for(int j=0; j<number;j++){
				if(d[i][k]+d[k][j]<d[i][j]){
					d[i][j]=d[i][k]+d[k][j];
				}
			}
		}
	}
	
	for(int i=0; i<number;i++){
		for(int j=0; j<number;j++){
			printf("%3d",d[i][j]);
		}
		printf("\n");
	}	
}

int main(void){
	floydWarshall();
}
