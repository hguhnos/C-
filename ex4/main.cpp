#include <iostream>

using namespace std; 

struct Storage
{
	int Potato;
	int Onion;
	int Carrot; 

	bool Tick()
	{
		int Order = 0;
		cout << "0) â�� �������� ���ư��ϴ�." << endl;
		cout << "1) â�� ä�Ҹ� �ֽ��ϴ�." << endl;
		cout << "2) â�� ä�Ҹ� �����ϴ�." << endl;
		cin >> Order;
		switch (Order)
		{
		case 0:
			return true; // TargetStorage ���� ó��  
			break;
		case 1:
			break;
		default:
			break;
		}

		return false;
	}
};



int main()
{
	Storage s1 = { 50, 50, 50 };
	Storage s2 = { 100, 100, 100 };
	int TargetStorage = 0; 
	int Order = 0;

	while (true)
	{
		system("cls");
		switch (TargetStorage)
		{
		case 1: 
		{cout << "s1 â�� �Դϴ�." << endl;
		bool result = s1.Tick();
			if (result)
				TargetStorage = 0; 
			}
			break; 

		case 2: 
			cout << "s2 â�� �Դϴ�." << endl;
			cout << "0) â�� �������� ���ư��ϴ�." << endl;
			cout << "1) â�� ä�Ҹ� �ֽ��ϴ�." << endl;
			cout << "2) â�� ä�Ҹ� �����ϴ�." << endl;
			cin >> Order;
			break;
		default:
			cout << "s1 â��" << endl;
			cout << "s2 â��" << endl;
			cin >> TargetStorage;
			break;
		}
	}

}