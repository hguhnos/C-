#include <iostream>
#include "Card.h"
#include "initialize.h"
#include "Common.h"
#include "Shuffle.h"
using namespace std;

//enum CardMark
//{
//	Clover = 0, 
//	Heart,
//	Dia, 
//	Spade
//};
//
//struct stCard
//{
//	CardMark mark;
//	int number; 
//};

void main()
{
	initialize();
	Shuffle(); 

	/*stCard card[52]; */
	
	//ī�� ���� �־��ֱ� 
	
	/* ī�� ���� / 52% determines shuffle  */
	//srand((unsigned int)time(null));

	//for (int i = 0; i < 52; i++)
	//{
	//	int firstnumber = rand() % 52;
	//	int secondnumber = rand() % 52;

	//	stcard temp = cards[firstnumber];
	//	cards[firstnumber] = cards[secondnumber]; // �����ʰ��� �������� �Է��� �Ѵ� 
	//	cards[secondnumber] = temp;
	//}

	// ī�� ��� 
	for (int i = 0; i < Max; ++i)
	{
		cout << "Mark = " << cards[i].mark << " Number = " << cards[i].number << endl;
	}
}