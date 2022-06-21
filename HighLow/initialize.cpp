#include "initialize.h"
#include "Common.h"

/*
1. 52���� ī�带 ������ ����
2. ������ ���۵Ǹ� ī�� �ϳ��� ����
3. �÷��̾�� ����ī�尡
���µ� ī�庸�� ���� ī������
���� ī�������� ���Ͽ� ������ �Ѵ�
4. ���� �´ٸ� �¸� Ʋ���� �й�
5. ī��� 1�� ���� ���� K�� ���� ����
6. ������ ������Ʈ > ���̾� > ��Ʈ > Ŭ�ι�
������ ����.
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