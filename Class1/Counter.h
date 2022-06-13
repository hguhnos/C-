#pragma once //한번만 컴파일 하도록 해준다

/*
캡슐화 
객체의 내부 구현부와 외부 사용자 부분을 분리
내부는 은닉하여 가릴 수 있거 
사용자 부분만 노출해서 사용에 편리하도록 함 
*/

/*
클래스 이름 : Counter 
- 숫자를 1씩 증가시킬 수 있다 (입력값과 출력값은 필요없다, 다시 말해 반환값도 필요없기에 void)
- 0으로 초기화할 수 있다 (입력값과 출력값은 필요없다)
- 현재 카운팅한 값을 알려준다 (입력값은 필요없으나 출력값은 필요하다)
*/

class Counter 
{
	//public: //모든 곳에서 접근 가능 
	//private: //접근 불가능 
	//protected: //상속 관계에서 접근 가능

	int count; //카운팅하는 값을 저장 - 변수 


public: 
	void counting() //숫자가 1씩 증가 
	{
		count++; 
	}

	Counter() : count{ 0 }//()를 사용 가능하지만 {}를 사용하면 명확한 값을 사용해야 하기 때문에 안전하다 
	{
		count = 0;
	}

	void reset() //count가 0으로 초기화 된다
	{
		count = 0;
	}
	int getCount() const//count값을 알려준다
	{
		return count; 
	}
};
