#pragma once
#include <iostream>

using namespace std;
class Circle
{
public:
	Circle();
	~Circle();

	virtual void printName() {
		cout << name << endl;
	}

	char name[100];
	int mX, mY;
	double mRadius;

};
