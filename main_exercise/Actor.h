#pragma once

/*
Actor 클래스
맴버 변수 
private : Movetype mType - 초기값 : Movetype::Right
private : int x - 초기값 : 0
private: int z - 초기값 : 0

function(함수)
public : void Tick(); // main()함수에 while문 안에서 호출할 예정 
public : void PrintLocation(); // (x = x, z = z) << endl;
*/

enum class Movetype
{
	Right,
	Up,
	Left,
	Down
};

class Actor
{
private:

	Movetype mtype;
	int x;
	int z; 

public:

	Actor();

	void Tick();
	void PrintLocation();

};

