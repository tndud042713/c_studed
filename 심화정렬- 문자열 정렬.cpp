#include<iostream>
#include<algorithm>

using namespace std;

string a[20000];
int n;

bool compare(string a, string b){// �ΰ��� ���ڿ��� ������ ���ش�.
//���̰� ª�� ���� �켱
    if(a.length()<b.length())
    	return 1; //a�� �켱������ ���� 
	else if(a.length()>b.length())
    	return 0; //a�� �켱������ ����
    //���̰� �������� 
	else 
	return a<b; //���������� �����Ѵ� string ���̺귯���� �˾Ƽ� ���ش�. 
}

int main(void){
	cin >> n ;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,compare);
	for(int i=0;i<n;i++){
		if(i>0 && a[i] == a[i-1]){
			continue; //������ �ܾ��� �н��ϰ� 
		}else{
			cout << a[i]<< '\n';
		}
	}
	return 0;
} 
