#pragma once

/*
counter 클래스 정의 

맴버변수
int value //value값은 생성자에서 초기화 한다. 

함수
void reset(); //value값을 0으로 초기화 한다 
void count(); //count는 value값을 1씩 증가시킨다 
int getValue() const; //value값을 return 한다 
*/

class Counter
{
	int value;

public: 

	Counter() : value{0}
	{

	}

	void reset()
	{
		value = 0; 
	}

	void counting()
	{
		value++;
	}

	int getValue() const
	{
		return value;
	}

};

