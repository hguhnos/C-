#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(const char* name, const char* addr)
{	
	// this : 구현하고 있는 객체를 가리킨다. 
	this->name = new char[strlen(name) + 1]; 
	// strcpy_s (저장할 대상, 문자열의 길이, 복사할 대상);
	// strien(name)에 +1을 해준 이유는 문자열 마지막에 항상 "|n"이 들어감
	// "|n"은 문자열의 마지막이라는 걸 표기
	strcpy_s(this->name, strlen(name) + 1, name);

	this->addr = new char[strlen(addr) + 1];
	strcpy_s(this->addr, strlen(addr) + 1, addr);

	cout << "person 객체 생성(" << name << ")" << endl;
}
Person::~Person()
{
	cout << "person 객체 제거(" << name << ")" << endl;

	delete[] name; 
	delete[] addr; 

	name = nullptr;
	addr = nullptr;
}

void Person::printAddr()
{
	cout << addr << "에 살고 있는 " << name << endl;
}

void Person::changeAddr(const char* newAddr)
{
	delete[] addr; 

	addr = new char[strlen(newAddr) + 1];
	strcpy_s(addr, strlen(newAddr) + 1, newAddr);
}

void Person::changeName(const char* newName)
{
	delete[] name;

	name = new char[strlen(newName) + 1];
	strcpy_s(name, strlen(newName) + 1, newName);
}