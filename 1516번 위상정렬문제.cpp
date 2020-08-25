#include<iostream>
#include<vector>
#include<queue>
#define MAX 501//전체 건물의 갯수는 500개 까지 지을 수 있다. 

using namespace std;

int n, inDegree[MAX], time[MAX], result[MAX];
vector<int> a[MAX];

void topologySort() {
	queue<int> q;
	// 진입 차수가 0인 노드를 큐에 삽입 합니다
	for(int i=1; i<=n;i++){
		if(inDegree[i] == 0){
			result[i] = time[i]; 
			q.push(i);
		}
	} 
	//정렬이 완전히 수행되려면 정확히 n개의 노드를 방문합니다.
	for(int i=1;i<=n;i++){
		int x = q.front();
		q.pop();
		for(int i=0; i< a[x].size() ;i++){
			int y = a[x][i];
			result[y] = max(result[y], result[x] + time[y]);
			// 새롭게 진입차수가 0이 된 정점을 큐에 삽입합니다.
			if(--inDegree[y]==0){
			q.push(y);
			} 
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d\n",result[i]);
	}
}
int main(void){
	scanf("%d",&n);
	for(int i=1; i<n; i++){
		scanf("%d",time[i]);
		while(1){
			int x;
			scanf("%d",&x);
			if(x==-1){
		    break;
			}		    
			inDegree[i]++;//진입차수를 1 증가시켜주고 
			a[x].push_back(i);//간선으로 연결함 
		}
	}
	topologySort();
}

