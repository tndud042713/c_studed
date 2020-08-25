#include<iostream>

using namespace std;

int number = 15;

// 하나의 노드 정보를 선언합니다.
typedef struct node *treePointer;
typedef struct node{
	int data;
	treePointer leftChild, rightChild;
}node;

// 전위 순회를 구현합니다.

void preorder(treePointer ptr){
	if(ptr){
		cout << ptr -> data << ' ';
		preorder(ptr->leftChild); //왼쪽노드를 기준으로 해서 전위순회를 수행
		preorder(ptr->rightChild);//그다음에는 오른쪽으로 수행 
	}
}

void inorder(treePointer ptr){
	if(ptr){
		
		inorder(ptr->leftChild); 
		cout << ptr -> data << ' ';
		inorder(ptr->rightChild);
	}
}

void postorder(treePointer ptr){
	if(ptr){
		
		postorder(ptr->leftChild); 		
		postorder(ptr->rightChild);
		cout << ptr -> data << ' ';
	}
}

int main(void){
	node nodes[number+1]; //15개의 노드들을 넣을 수 있는 방을 만들어 준다
    for(int i=1; i<=number;i++){
    	nodes[i].data = i;
    	nodes[i].leftChild = NULL;
    	nodes[i].rightChild = NULL;
	} 
	//각 노드들을 연결해주기 위한 추가 for 문 
	for(int i=1;i<=number;i++){
		if(i%2==0){
			nodes[i/2].leftChild=&nodes[i];
		}else{
			nodes[i/2].rightChild=&nodes[i];
		}
	}
	postorder(&nodes[1]);
	return 0;
}
