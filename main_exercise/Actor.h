#pragma once

/*
Actor Ŭ����
�ɹ� ���� 
private : Movetype mType - �ʱⰪ : Movetype::Right
private : int x - �ʱⰪ : 0
private: int z - �ʱⰪ : 0

function(�Լ�)
public : void Tick(); // main()�Լ��� while�� �ȿ��� ȣ���� ���� 
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

