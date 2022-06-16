#include <iostream>
#include "Actor.h"
#include <Windows.h>

using namespace std; 

Actor::Actor() : x{ 0 }, z{ 0 }, mtype{Movetype::Right} // 초기화 
{

}

void Actor::Tick()
{

	system("cls");
	cout << "(x = " << x << ", z = " << z << ")" << endl;

	switch (mtype)
	{
	case Movetype::Right:
		x++;
		if (x >= 20)
		{
			mtype = Movetype::Up;
		}
		break;

	case Movetype::Up:
		z++;
		if (z >= 20)
		{
			mtype = Movetype::Left;
		}
		break;

	case Movetype::Left:
		x--;
		if (x <= 0)
		{
			mtype = Movetype::Down;
		}
		break;

	case Movetype::Down:
		z--;
		if (z <= 0)
		{
			mtype = Movetype::Right;
		}
		break;
	}
}

// (x = x, z = z) <--- 이렇게 출력
void Actor::PrintLocation()
{
	cout << "(x = " << x << "z = )" << z << endl;
}
	

