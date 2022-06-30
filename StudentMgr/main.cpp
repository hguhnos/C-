#include <iostream>
#include "Student.h"
#include <vector>
#include <map>

using namespace std;

int main()
{
	int mgrType = 0;
	vector<Student> vecStudent;
	map<string, Student> mapStudent; 

	string name = " ";
	int classNum = 0;
	int score = 0;

	while (true)
	{
		switch (mgrType)
		{
		case 1:
			{
				cout << "�̸��� �Է��ϼ���" << endl;
				cin >> name;
				cout << "���� �Է��ϼ���" << endl;
				cin >> classNum;
				cout << "������ �Է��ϼ���" << endl;
				cin >> score;
				Student aaa = { name, classNum, score };
				//vecStudent.push_back(aaa);
				mapStudent.insert({ name, aaa });
				mgrType = 0;
			}
		break;

		case 2: 
			{
				string index = "";
				//int index ���� �ϳ� �޾Ƽ� �ش� index�� �л� ������ �����ϵ��� �����մϴ� 
				cout << "������ �л��� �̸��� �Է��ϼ���" << endl;
				cin >> index;
				
				if (mapStudent.find(index) != mapStudent.end())
				{
					mapStudent.erase(index);
				}

				mgrType = 0;
			}
		break; 

		case 3: 
			{	//���� find�� �����ߴٸ� ã�� ��ü�� map  �ּ� ��ȯ, 
				//find�� �����ߴٸ� ���ٸ� map�� ������ �ּ� ��ȯ 
				auto iter = mapStudent.find(name); 
				if (iter != mapStudent.end())
				{
					iter->second.Printinfo();
				}
				mgrType = 0; 
			}
		break;

		case 4:
			{
			/*for(auto iter = mapStudent.begin(); iter != mapStudent.end();iter++)*/

			for (auto iter : mapStudent)
			{
				iter.second.Printinfo();
			}
				
				/*(int i = 0; i < vecStudent.size(); ++i)
			{
				cout << "index = " << i << " "; 
				vecStudent[i].Printinfo();
			}*/
				/*for (Student s : vecStudent)
				{
					s.Printinfo();
				}
				*/
			mgrType = 0;
			}
		break;

		default:
			cout << "[StudentManager]" << endl;
			cout << "1) Add Student" << endl;
			cout << "2) Delete Student" << endl;
			cout << "3) Find Student" << endl;
			cout << "4) Print All Student" << endl;
			cin >> mgrType;
			break;
		}
	}
}