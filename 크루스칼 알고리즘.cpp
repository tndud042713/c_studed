#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//부모 노드를 찾는 함수 
int getparent(int parent[], int x){
	if(parent[x] == x) return x; // 부모가 자기 자신일 때는 자기 자신을 리턴
	return parent[x] = getparent(parent, parent[x]);	 
}

//두 부모 노드를 합치는 함수 
int unionparent(int parent[], int a, int b){
	a= getparent(parent, a);
	b= getparent(parent, b);
	if(a<b) parent[b] =a;
	else parent[a] = b;
} 

//같은 부모를 가지는지 확인
int findparent(int parent[], int a, int b){
	a= getparent(parent, a);
	b= getparent(parent, b);
	if(a == b) return 1;
	return 0;
}

//간선 클래스 선언 
class Edge{
public:
	int node[2];
	int distance;
	//생성자를 이용한 초기화 
	Edge(int a, int b, int distance){
		this->node[0] = a;
		this->node[1] = b;
		this->distance = distance;
	}
	//정렬의 기준을 잡음 
	bool operator<(Edge &edge){
		return this->distance<edge.distance; //거리가 적은게 출력되게함  
	}
}; 

int main(void)
{
	int n = 7;
	int m = 11;
	
	vector<Edge> v;
	v.push_back(Edge(1, 7, 12));
	v.push_back(Edge(1, 4, 28));
	v.push_back(Edge(1, 5, 17));
	v.push_back(Edge(1, 7, 12));
	v.push_back(Edge(2, 4, 24));
	v.push_back(Edge(2, 5, 62));
	v.push_back(Edge(3, 5, 20));
	v.push_back(Edge(3, 6, 37));
	v.push_back(Edge(4, 7, 13));
	v.push_back(Edge(5, 6, 45));
	v.push_back(Edge(5, 7, 73));
	
	// 간선의 비용을 기준으로 오름차순 정렬 
	sort(v.begin(), v.end());

    // 각 정점이 포함된 그래프가 어디인지 저장 
    int parent[n];
    for(int i=0; i<n ;i++){
    	parent[i]=i;
	}
	
	int sum=0;
    for(int i=0; i < v.size(); i++){
    	//사이클이 발생하지 않는 경우 그래프에 포함 
    	if(!findparent(parent, v[i].node[0] - 1,v[i].node[1] - 1)){
    		sum += v[i].distance;
    		unionparent(parent, v[i].node[0] - 1,v[i].node[1] - 1);
		}
	}
	printf("%d\n", sum);
}
