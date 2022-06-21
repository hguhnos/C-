#include <iostream>
#include "Counter.h"
#include "Counter2.h"
#include "VecF.h"
using namespace std;


int main()
{
	//��ü ���� ��� 
	//����Ʈ ������ - �Ű����� ����
	Counter cnt1[4];
	Counter* pCnt = new Counter[10];
	delete[] pCnt;

	//����Ʈ ������ - �Ű����� ����
	Counter2 cnt2{ 999 }; 
	Counter2 cnt3[3] = { Counter2(9), Counter2(9), Counter2(9) };
	//Counter2 cnt2[3];//error
	//Counter2* pCnt = new Counter2[10];//error

	//���� ������ - ���� ��ü�� �����ؼ� �����Ѵ�
	Counter2 cnt4{ cnt2 }; //cnt2�� cnt4�� ����ȴ�. 
	Counter2 cnt5 = cnt2;//cnt2�� cnt5�� ����ȴ�.

	//���� �������� ������ - ���� ����(shallow copy)
	float a[3] = { 1,2,3 };
	VecF v1(3, a);
	VecF v2(v1);    //v1�� �����ؼ� v2�� �����Ѵ�

	//���� �������� ������ = �޸� ���� 
	/*
	add �Լ����� tmp������ �����ϰ� �����
	2�� new, memcpy�� ������ �ǰ� ����� ���� ��� ������ ������ �ʿ䰡 ����. 
	�̵� �����ڸ� ����ϸ� ���� ���� 
	*/
	float p1[3] = { 1,2,3 };
	float p2[3] = { 2,4,6 };
	VecF v3(3, p1);
	VecF v4(3, p2); 
	VecF v5(v3.add(v4)); //v3�� v4�� ���� ������ v5�� �����ϰڴ� 

	//L-value�� R-value
	/*int a1 = 10;
	int b1 = a1; */
	//L-value : �ٽ� ����� �� �ִ� ��(ex: a,b)
	//R-value : �ѹ� ����ϰ� �������� ��(10)
	//&:L-value ���� ��ȣ 
	//&&:R-value ���� ��ȣ

	int a1 = 10;
	int& aRef = a1; //L-value ������ L-value�� ���� 
	//int&& aa = 10; //���� : L-value ������ R-value�� ������ �� ����
	const int& bb = 20; //��� L-value �����δ� R-value ���� ���� 

	int&& c = 30; //R-value ������ R-value�� ���� ���� 
	//int&& d = a1; //���� : R-value ������ L-value�� ������ �� ����

	VecF v6(3);
	VecF v7(3);
	VecF&& vRef1 = v6.add(v7); //��ȯ�Ǵ� ���� R-value�̹Ƿ� ���� ����(pointer R-value : pR-value )
}

