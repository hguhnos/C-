#pragma once
#include <iostream>

using namespace std; 
// Ŭ���� �̸�: Student
// �ɹ����� : 
// private: 
// string mName, int mClassNum, int mScore;
// ��� �ɹ� ������ �����ڿ��� string name, int classNum, int score �Ķ���͸� �޾� �ʱ�ȭ�մϴ� 

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
		cout << "�̸� : " << mName << ", " << mClassNum << "  ���� " << mScore << endl; 
	}

	string GetName() { return mName; };
	int GetClassNum() { return mClassNum; };
	int GetScore() { return mScore; };
	//�Լ� �̸�: Printinfo
	//�Ķ���� : ���� 
	//��ȯ�� : ���� 
	//�Լ� ��� cout << "�̸�:" << name << "," << mClassNum << "����" << mScore << endl;
};

