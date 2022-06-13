#pragma once
#include "Circle.h"

class Coin : public Circle 
{
public: 
	Coin();
	~Coin();

	virtual void printName() override {
		__super::printName();
		cout << "price = " << price << " color = " << color << endl;
	}

	int price; 
	int color; 
};