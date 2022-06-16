#include <iostream>
#include "Counter.h"
#include "User.h"
#include "Person.h"

using namespace std; 

void g(const Counter& c) // const = 상수형으로 받는다 = 값만 변경하지 않는다 따라서 참조를 할 수 있다. 
{	
	//const로 클래스를 참조하면 호출하는 클래스에 함수의 형태 또한 const여야 한다 
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

	Person* p1 = new Person("철수", "서울시");
	Person* p2 = new Person("광수", "경기도");
	p1->changeName("소크라테스");
	p1->printAddr();
	p1->changeAddr("샌프란시스코"); 
	p1->printAddr();
	

	delete p1; 
	delete p2; 




















	/*
	//포인터?
	-변수, 구조체, 클래스 등의 객체를 가르키는 변수 (위치만 알려준다)
	*/
	
	int a = 10;
	/*
	int* : 가리킬 객체 자료형 포인터
	ptr : 포인터 변수의 이름
	*/
	int* ptr;
	/*
	& : 주소값 계산 연산자
	*/
	ptr = &a; 

	/*
	*ptr: 가리키고 있는 곳
	*ptr이 가리키고 있는 곳에 20을 넣는다.
	*/
	*ptr = 20;

	cout << "a의 값은? " << a << endl;
	
	/*
	동적 메모리 할당 
	강제로 메모리에 공간을 할당 
	*/

	/*
	new : 동적 메모리 할당 연산자
	*/

	int* intPtr; 
	intPtr = new int; 
	*intPtr = 10; 
	
	/*
	new : 동적 메모리 반환 연산자 
	intPtr = nullptr;//C에서는 Null = 0, c++에서는 nullptr = 비어있다라는 단어
	*/
	delete intPtr; 
	intPtr = nullptr; 

	int* intArrPtr;
	intArrPtr = new int[4]; 
	*intArrPtr = 10; 
	*(intArrPtr + 1) = 20; 
	intArrPtr[2] = 30; 

	/* 
	배열을 동적 메모리 반환 
	*/
	delete[] intArrPtr; 
	intArrPtr = nullptr; 

	int x = 10, y = 20;
	int xRef = x;
	xRef = 100;
	xRef = y;

	/* 
	L - value 참조 방법 
	*/
	/*
	int x = 10, y = 20; 
	int *xRef = &x; 
	*xRef = 100; 
	*xRef = y; 
	*/
}