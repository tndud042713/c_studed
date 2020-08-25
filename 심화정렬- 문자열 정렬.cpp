#include<iostream>
#include<algorithm>

using namespace std;

string a[20000];
int n;

bool compare(string a, string b){// 두개의 문자열이 들어오게 해준다.
//길이가 짧은 순서 우선
    if(a.length()<b.length())
    	return 1; //a의 우선순위가 높다 
	else if(a.length()>b.length())
    	return 0; //a의 우선순위가 낮다
    //길이가 같은경우는 
	else 
	return a<b; //사전순으로 리턴한다 string 라이브러리가 알아서 해준다. 
}

int main(void){
	cin >> n ;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,compare);
	for(int i=0;i<n;i++){
		if(i>0 && a[i] == a[i-1]){
			continue; //동일한 단어라면 패스하고 
		}else{
			cout << a[i]<< '\n';
		}
	}
	return 0;
} 
