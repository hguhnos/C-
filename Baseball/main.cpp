#include <iostream>

using namespace std; 

int main()
{
	int a[3] = { 1, 2, 3 };
	int b[3] = { 0 };

	while (1)
	{
		cin >> b[0] >> b[1] >> b[2];
		system("cls");

		//��Ʈ����ũ ���� ���ϱ� 
		int cntS = 0; 
		int cntB = 0;
		int cntO = 0;

		for (int i = 0; i < 3; ++i)
		{
			if (a[1] == b[i])
			{
				cntS++;
			}

		for (int j = 0; j < 3; ++j)
		{
			if (a[i] == b[j])
			{
				if (i == j)
					continue; // �Ʒ��� �ڵ带 �������� �ʰ�, ���� for���� �����Ѵ�. 

				if (a[i] == b[j])
				{
					cntB++;
					break; // for���� ������ �ߴܽ�Ų��. 
				}
			}
		}

		}
		cout << endl;

		if (cntS == 0 && cntB == 0)
		{
			cout << "OUT" << endl;
		}
		else if (cntS == 3)
		{
			cout << "Homerun" << endl; 
		}
		else
		{ 
			//��� ��� 
		cout << cntS << "S" << cntB << "B" << endl;
		}
	}
}