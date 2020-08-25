#include<iostream>

using namespace std;

int n;
int a[10001];//={0,}굳이 이렇게 안해도 초기화가 이루어진다 

int main(void){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		a[x]++;
	} 
	for(int i=0; i<10001; i++){
		while(a[i] != 0){
			printf("%d\n", i);
			a[i]--;
		}
	}
}
