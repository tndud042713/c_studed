#include <iostream>
#include <vector> //연결리스트 형태로 표현되는 벡터 
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> >a,
             pair<string, pair<int, int> >b){
             	if(a.second.first == b.second.first){
             		return a.second.second>b.second.second;//더 어린학생이 우선순위를 갖는다. 
				 }else{
				 	return a.second.first > b.second.first;//그 밖의 경우에는 그냥 성적이 높은사람이 더 높다. 
				 }
			 }
int main(void){
	vector<pair<string, pair<int,int> > > v;
	v.push_back(pair<string, pair<int,int> >("나동빈",pair<int,int>(90,19961222)));
	v.push_back(pair<string, pair<int,int> >("이태일",pair<int,int>(97,19930518)));
	v.push_back(pair<string, pair<int,int> >("박한울",pair<int,int>(95,19930203)));
	v.push_back(pair<string, pair<int,int> >("이상욱",pair<int,int>(90,19921207)));
	v.push_back(pair<string, pair<int,int> >("강종구",pair<int,int>(88,19900302)));
	
	sort(v.begin(),v.end(),compare);
	for(int i=0;i<v.size();i++)//위의 벡터의 개수에 따라 벡터의 사이즈가 결정됨 
	{
		cout<<v[i].first << ' ';
	}
	return 0;
}
