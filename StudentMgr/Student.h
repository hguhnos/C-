#pragma once
#include <iostream>

using namespace std; 
// 클래스 이름: Student
// 맴버변수 : 
// private: 
// string mName, int mClassNum, int mScore;
// 모든 맴버 변수를 생성자에서 string name, int classNum, int score 파라미터를 받아 초기화합니다 

class Student
{
private:
	string mName;
	int mClassNum; 
	int mScore; 

public:
	Student(string name, int classNum, int score) :
		mName(name), mClassNum(classNum), mScore(score) {}; 

	void Printinfo()
	{
		cout << "이름 : " << mName << ", " << mClassNum << "  점수 " << mScore << endl; 
	}

	string GetName() { return mName; };
	int GetClassNum() { return mClassNum; };
	int GetScore() { return mScore; };
	//함수 이름: Printinfo
	//파라미터 : 없음 
	//반환값 : 없음 
	//함수 기능 cout << "이름:" << name << "," << mClassNum << "접수" << mScore << endl;
};

