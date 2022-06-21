#include "initialize.h"
#include "Common.h"

/*
1. 52개의 카드를 가지고 시작
2. 게임이 시작되면 카드 하나를 오픈
3. 플레이어는 다음카드가
오픈된 카드보다 높은 카드인지
낮은 카드인지에 대하여 배팅을 한다
4. 선택 맞다면 승리 틀리면 패배
5. 카드는 1이 가장 낮고 K가 가장 높다
6. 문양은 스페이트 > 다이아 > 하트 > 클로버
순으로 높다.
*/

void initialize()
{
	for (int i = 0; i < 52; ++i)
	{
		int j = i / 13;
		switch (j)
		{
		case 0:
			cards[i].mark = Clover;
			break;

		case 1:
			cards[i].mark = Heart;
			break;

		case 2:
			cards[i].mark = Dia;
			break;

		case 3:
			cards[i].mark = Spade;
			break;

		}
		cards[i].number = (i % 13) + 1;
	}
}