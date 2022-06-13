#pragma once
#include "Counter.h"

class User
{
public: 
	void KillMonster()
	{
		m_Counter.counting(); // 사용할 수 있다 Counter.counting(); 절대 사용 불가 
	}

	Counter m_Counter; //객체를 만들어야 위와 같이
};