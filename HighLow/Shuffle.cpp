#include "Shuffle.h"
#include <iostream>
#include "Common.h"

void Shuffle()
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 52; i++)
	{
		int FirstNumber = rand() % 52;
		int SecondNumber = rand() % 52;

		stCard Temp = cards[FirstNumber];
		cards[FirstNumber] = cards[SecondNumber]; // �����ʰ��� �������� �Է��� �Ѵ� 
		cards[SecondNumber] = Temp;
	}
}
