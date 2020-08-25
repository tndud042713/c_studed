#include<iostream>
#include<algorithm>

using namespace std;

string a[20000];
int n;

int getSum(string a){
	int length =a.length(), sum=0;
	for(int i=0;i<length;i++){
		//숫자인 경우에만 더합니다.
		if(a[i]-'0'<= 9 && a[i]-'0'>=0){
			sum+=a[i]-'0';
		}
	}
	return sum;
}
bool compare(string a, string b){// 두개의 문자열이 들어오게 해준다.
//길이가 짧은 순서 우선
    if(a.length() <b.length())
    	return 1; //a의 우선순위가 높다 
	else if(a.length() >b.length())
    	return 0; //a의 우선순위가 낮다
    //길이가 같은경우는 
	else{
		int aSum = getSum(a);
	    int bSum = getSum(b);
	    if(aSum != bSum){
			return aSum < bSum;
		}else{
		return a<b;
		}
    }
}

int main(void){
	cin >> n ;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,compare);
	for(int i=0;i<n;i++){		
			cout << a[i]<< '\n';
		}
}
