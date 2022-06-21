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
	
	//카드 정보 넣어주기 
	
	/* 카드 섞기 / 52% determines shuffle  */
	//srand((unsigned int)time(null));

	//for (int i = 0; i < 52; i++)
	//{
	//	int firstnumber = rand() % 52;
	//	int secondnumber = rand() % 52;

	//	stcard temp = cards[firstnumber];
	//	cards[firstnumber] = cards[secondnumber]; // 오른쪽값을 왼족으로 입력을 한다 
	//	cards[secondnumber] = temp;
	//}

	// 카드 출력 
	for (int i = 0; i < Max; ++i)
	{
		cout << "Mark = " << cards[i].mark << " Number = " << cards[i].number << endl;
	}
}