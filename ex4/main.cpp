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
		cout << "0) 창고 선택으로 돌아갑니다." << endl;
		cout << "1) 창고에 채소를 넣습니다." << endl;
		cout << "2) 창고에 채소를 꺼냅니다." << endl;
		cin >> Order;
		switch (Order)
		{
		case 0:
			return true; // TargetStorage 변경 처리  
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
		{cout << "s1 창고 입니다." << endl;
		bool result = s1.Tick();
			if (result)
				TargetStorage = 0; 
			}
			break; 

		case 2: 
			cout << "s2 창고 입니다." << endl;
			cout << "0) 창고 선택으로 돌아갑니다." << endl;
			cout << "1) 창고에 채소를 넣습니다." << endl;
			cout << "2) 창고에 채소를 꺼냅니다." << endl;
			cin >> Order;
			break;
		default:
			cout << "s1 창고" << endl;
			cout << "s2 창고" << endl;
			cin >> TargetStorage;
			break;
		}
	}

}