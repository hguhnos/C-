#include <iostream>
#include "Counter.h"
#include "User.h"
#include "Person.h"

using namespace std; 

void g(const Counter& c) // const = ��������� �޴´� = ���� �������� �ʴ´� ���� ������ �� �� �ִ�. 
{	
	//const�� Ŭ������ �����ϸ� ȣ���ϴ� Ŭ������ �Լ��� ���� ���� const���� �Ѵ� 
	cout << "Counter = " << c.getCount() << endl; 
}

int main()
{
	Counter c1; 
	c1.counting();
	c1.counting();
	cout << "c1 Count = " << c1.getCount() << endl;
	c1.counting();
	g(c1);

	Person* p1 = new Person("ö��", "�����");
	Person* p2 = new Person("����", "��⵵");
	p1->changeName("��ũ���׽�");
	p1->printAddr();
	p1->changeAddr("�������ý���"); 
	p1->printAddr();
	

	delete p1; 
	delete p2; 




















	/*
	//������?
	-����, ����ü, Ŭ���� ���� ��ü�� ����Ű�� ���� (��ġ�� �˷��ش�)
	*/
	
	int a = 10;
	/*
	int* : ����ų ��ü �ڷ��� ������
	ptr : ������ ������ �̸�
	*/
	int* ptr;
	/*
	& : �ּҰ� ��� ������
	*/
	ptr = &a; 

	/*
	*ptr: ����Ű�� �ִ� ��
	*ptr�� ����Ű�� �ִ� ���� 20�� �ִ´�.
	*/
	*ptr = 20;

	cout << "a�� ����? " << a << endl;
	
	/*
	���� �޸� �Ҵ� 
	������ �޸𸮿� ������ �Ҵ� 
	*/

	/*
	new : ���� �޸� �Ҵ� ������
	*/

	int* intPtr; 
	intPtr = new int; 
	*intPtr = 10; 
	
	/*
	new : ���� �޸� ��ȯ ������ 
	intPtr = nullptr;//C������ Null = 0, c++������ nullptr = ����ִٶ�� �ܾ�
	*/
	delete intPtr; 
	intPtr = nullptr; 

	int* intArrPtr;
	intArrPtr = new int[4]; 
	*intArrPtr = 10; 
	*(intArrPtr + 1) = 20; 
	intArrPtr[2] = 30; 

	/* 
	�迭�� ���� �޸� ��ȯ 
	*/
	delete[] intArrPtr; 
	intArrPtr = nullptr; 

	int x = 10, y = 20;
	int xRef = x;
	xRef = 100;
	xRef = y;

	/* 
	L - value ���� ��� 
	*/
	/*
	int x = 10, y = 20; 
	int *xRef = &x; 
	*xRef = 100; 
	*xRef = y; 
	*/
}