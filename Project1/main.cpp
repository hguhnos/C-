#include <iostream>
#include <Windows.h>

using namespace std;


int number[1000] = { 0 }; //전역변수 1000 = 바구니 
//
//// 함수 만들기 
//// 함수 이름 : printTo100
//// 0~100까지 출력
//// 입력값: 없음
//// 출력값: 없음 - 출력값이 없으면  void
//
//void PrintTo100()
//{
//	for (int i = 0; i < 100; ++i) // 100 = 바구니 속에 들어가는 계란 수
//	{
//		number[i] = i;
//		cout << number[i] << endl;
//	}
//}
//
////함수 이름:PrintToEven
////동작: 짝수 출력
////입력값 : 없음
////출력값 : 없음
//
//void PrintToEven()
//{
//	for (int i = 0; i < 100; ++i)
//	{
//		number[i] = i * 2;
//		cout << number[i] << endl;
//	}
//}
//
////함수 이름:PrintToOdd
////동작: 홀수 출력
////입력값 : 없음
////출력값 : 없음
//
//void PrintToOdd()
//{
//	for (int i = 0; i < 100; ++i)
//	{
//		number[i] = 2*i+1;
//		cout << number[i] << endl;
//	}
//}
//
////함수 이름:PrintTo3Dra
////동작: 3의 배수 출력
////입력값 : 없음
////출력값 : 없음
//
//void PrintTo3Dra()
//{
//	for (int i = 0; i < 100; ++i)
//	{
//		number[i] = 3 * i;
//		cout << number[i] << endl;
//	}
//}
//
////함수 이름:PrintTomulti
////동작: 3의 승수 출력
////입력값 : 없음
////출력값 : 없음
//
//void PrintTo3multi()
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		number[i] = 1;
//		// 3, 3*3, 3*3*3, 3*3*3*3
//		for (int j = 0; j < i; ++i)
//		{
//			number[i] *= 3;
//		}
//		cout << number[i] << endl;
//	}
//}
//
////함수 이름:PrintToGogodan
////동작: n의 구구단 * 9까지 츨력
////입력값 : int n 
////출력값 : 없음
//
//void PrintToGogodan(int n)
//{
//	int result;
//	for (int i = 1; i < 10; ++i)
//	{
//		result = n * i;
//		cout << n << " * " << i << " = "<< result << endl;
//	}
//}
//
////함수 이름:PrintFactorial 
////동작: n!을 구한 결과값을 반환한다.
////입력값 : int n 
////출력값 : int
//
//int PrintFactorial(int n)
//{
//
//	int result  = 1;
//	for (int i = 1; i <= n; ++i)
//	{
//		result *= i;
//	}
//	return result;
//}

int main()
{
	//x를 Location X라고 가정하고 +방향으로 갔다가 - 방향으로 움직이게 해주자 
	int x = { 0 };
	bool IsMoveRight = true;

	while (1)
	{
		system("cls");
		cout << x << endl;

		if (IsMoveRight)
		{
			x++;
			if (x >= 20)
			{
				IsMoveRight = false;
			}
		}
		else
		{
			//왼쪽으로 이동(--방향)
			x--;
			if (x <= 0)
			{
				IsMoveRight = true;
			}
		}
		Sleep(100);
	}
}
	//for (int i = 0; i < 50; i++) /* int i = 0 값이 0인 int i라는 개념을 생성한 것을 의미,  i++은 for 구문이 실행될 때 i에 1씩 계속 더하는 것을 의미 */
	//{
	//	number[i] = i;
	//	cout << number[i] << endl;
	//}
	////if문 연습하는 거 아니니깐 사용하지 않기
	////number에 0~100까지 짝수만 넣어서 출력 

	//for (int i = 0; i < 100; ++i)
	//{
	//	//i  = 0, 1, ,2 ,3, 4, 5, 6, 7, 8, 9, 10...
	//	//i*2= 0, 2, 4, 6, 8, 10, 12, 14, 16
	//	
	//	number[i] = i * 2; 
	//	cout << number[i] << endl; 
	//}

	//for (int i = 0; i < 50; ++i)
	//{
	//	number[i] = i * 2+1;
	//	cout << number[i] << endl;
	//}
	//
	//for (int i = 0; i < 34; ++i)
	//{
	//	number[i] = i * 3;
	//	cout << number[i] << endl;
	//} 전체 주석 처리 ctrl+K+C / 주석 처리 해제 ctrl+K+U

	/*for (int i = 0; i < 10; ++i)
	{
		number[i] = pow(i,2);
		cout << number[i] << endl;
	}*/

	/*for (int i = 0; i < 10; ++i)
	{
		number[i] = pow(i,3);
		cout << number[i] << endl;
	}*/

	//for (int i = 0; i < 10; ++i)
	//{
	//	number[i] = 1; 
	//	// 3, 3*3, 3*3*3, 3*3*3*3
	//	for (int j = 0; j < i; ++j)
	//	{
	//		number[i] *= 3; 
	//	}
	//	cout << number[i] << endl; 
	//}

	//i0 = 3
	//i1 = i0 * 3
	//i2 = i1 * 3
	//i3 = i2 * 3
	//i4 = i3 * 3
	//i5 = i4 * 3
	/*number[0] = 3;
	for (int i = 1; i < 10; ++i)
	{
		number[i] = number[i - 1] * 3;
		cout << number[i - 1] << endl;
	}*/

	/*
	2 * 1 = 2
	2 * 2 = 4
	2 * 3 = 6
	2 * 4 = 8
	2 * 5 = 10
	2 * 6 = 12
	2 * 7 = 14
	2 * 8 = 16
	2 * 9 = 18*/
	/*for (int i = 1; i < 10; ++i)
	{
		int c = 2;
		cout << c << "*" << i << "=" << c*i << endl;
	}*/

	//for (int i = 2; i < 10; ++i) // for (int 2 = 1; i<=9; ++i)
	//{
	//	number[i] = i;

	//	for (int j = 1; j < 10; ++j) //for (int i = 1; j<= 9; ++j)
	//	{
	//		number[j] = j;
	//		cout << number[i] << "*" << number[j] << "=" << number[i] * number[j] << endl;
	//	}
	//	cout << endl;

	/*for (int j = 2; j <= 9; ++j)
	{
		for (int i = 1; i <= 9; ++i)
		{
			int result = j * i;
			cout << j << " * " << i << " = " << result << endl;
		}
		cout << endl;
	}*/

	//int b = {0}; // 1) int b; b) int b = 0 형태와 무관하게 초기화 즉, 0으로 설정해주는 것이 관건이다 
	//cin >> b;
	//for (int a = 1; a <= 9; ++a)
	//{
	//	cout << b << " * " << a << " = " << b * a << endl;
	//	// cin >> b; for 구문 안에 넣으면 값이 하나밖에 나오지 않는다.  
	//}

//int a = { 0 };
//cin >> a; 
//
//int result = 1;
//for (int i = 1; i <= a; ++i)
//{
//	result *= i;
//}
//cout << result << endl; 
//}