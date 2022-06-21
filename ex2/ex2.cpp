#include <iostream>

using namespace std;

//float standardweight(float height)
//{
//	return (height - 100) * 0.9;
//}
//
//float gbmi(float weight, float standardweight)
//{
//	return (weight - standardweight) * 100 / standardweight;
//}
//
//int main()
//{
//	float temp, height, weight, bmi, n = 0;
//
//	cin >> height >> weight;
//	temp = standardweight(height); // temp 일시적인 
//	n = gbmi(weight, temp);
//
//	if (n <= 10)
//	{
//		cout << "정상" << endl;
//	}
//	else if (n >10 && n<= 20)
//	{
//		cout << "과체중" << endl;;
//	}
//	else if (n > 20) 
//	{ 
//		cout << "비만" << endl;;
//	}
//}

//int h, m, s, n;

	//cin >> n;

	//s = n % 60; //초
	//m = n / 60; //분
	//h = m / 60; //시간 
	//if (m >= 60) // 만약 분이 60보다 크거나 같으면 
	//{
	//	m = m % 60; // 나머지 몫만 
	//}
	//cout << h << "시간" << m << "분" << s << "초";

/*

int gsec = 0; 
cin >> gsec;

int hour = gsec /3600;
int min = gsec / 60 % 60;
int gsec = % 60;

cout << hour << "시" << min << "분" << sec << "초" << endl;

*/

int main()
{
	int arr[10] = { 10, 3, 76, 54, 42, 13, 34, 28, 99, 7 };

	for (int i = 0; i < 10; ++i)
	{
		int lowest = 0;
		for (int j = i + 1; j < 10; ++j)
		{
			if (arr[lowest] > arr[j])
				lowest = j;
		}

	}
	int temp = arr[lowest];
	arr[lowest] = arr[i];
	arr[i] = temp;
	
	for (int itr : arr)
	{
		cout << itr << " "; 
	}
}