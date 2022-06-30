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
				cout << "이름을 입력하세요" << endl;
				cin >> name;
				cout << "반을 입력하세요" << endl;
				cin >> classNum;
				cout << "점수를 입력하세요" << endl;
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
				//int index 값을 하나 받아서 해당 index에 학생 정보를 제거하도록 구현합니다 
				cout << "제거할 학생의 이름을 입력하세요" << endl;
				cin >> index;
				
				if (mapStudent.find(index) != mapStudent.end())
				{
					mapStudent.erase(index);
				}

				mgrType = 0;
			}
		break; 

		case 3: 
			{	//만약 find가 성공했다면 찾은 객체의 map  주소 반환, 
				//find가 실패했다면 없다면 map에 마지막 주소 반환 
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