#include<iostream>
#include<algorithm>

using namespace std;

class Student{
public:
	string name;
	int score;
	Student(string name, int score){
		this->name = name;
		this->score = score;
	}
	// 정렬 기준은 '점수가 작은 순서'
	bool operator < (Student &student) {
		return this->score < student.score;
	}
};//일종의 새로운 자료형을 만들어 준 것 

int main(void){
	Student students[]={
	Student("나 동 빈",90),
	Student("이 상 욱",93),
	Student("박 한 울",97),
	Student("강 종 구",87),
	Student("이 태 일",92)	
	};//초기화 해주고 
	sort(students,students+5);
	for(int i=0; i<5; i++)
	{
		cout<<students[i].name<<endl;
	}
}
