#include <iostream>
#include <Windows.h>

using namespace std;


int number[1000] = { 0 }; //�������� 1000 = �ٱ��� 
//
//// �Լ� ����� 
//// �Լ� �̸� : printTo100
//// 0~100���� ���
//// �Է°�: ����
//// ��°�: ���� - ��°��� ������  void
//
//void PrintTo100()
//{
//	for (int i = 0; i < 100; ++i) // 100 = �ٱ��� �ӿ� ���� ��� ��
//	{
//		number[i] = i;
//		cout << number[i] << endl;
//	}
//}
//
////�Լ� �̸�:PrintToEven
////����: ¦�� ���
////�Է°� : ����
////��°� : ����
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
////�Լ� �̸�:PrintToOdd
////����: Ȧ�� ���
////�Է°� : ����
////��°� : ����
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
////�Լ� �̸�:PrintTo3Dra
////����: 3�� ��� ���
////�Է°� : ����
////��°� : ����
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
////�Լ� �̸�:PrintTomulti
////����: 3�� �¼� ���
////�Է°� : ����
////��°� : ����
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
////�Լ� �̸�:PrintToGogodan
////����: n�� ������ * 9���� ����
////�Է°� : int n 
////��°� : ����
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
////�Լ� �̸�:PrintFactorial 
////����: n!�� ���� ������� ��ȯ�Ѵ�.
////�Է°� : int n 
////��°� : int
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
	//x�� Location X��� �����ϰ� +�������� ���ٰ� - �������� �����̰� ������ 
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
			//�������� �̵�(--����)
			x--;
			if (x <= 0)
			{
				IsMoveRight = true;
			}
		}
		Sleep(100);
	}
}
	//for (int i = 0; i < 50; i++) /* int i = 0 ���� 0�� int i��� ������ ������ ���� �ǹ�,  i++�� for ������ ����� �� i�� 1�� ��� ���ϴ� ���� �ǹ� */
	//{
	//	number[i] = i;
	//	cout << number[i] << endl;
	//}
	////if�� �����ϴ� �� �ƴϴϱ� ������� �ʱ�
	////number�� 0~100���� ¦���� �־ ��� 

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
	//} ��ü �ּ� ó�� ctrl+K+C / �ּ� ó�� ���� ctrl+K+U

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

	//int b = {0}; // 1) int b; b) int b = 0 ���¿� �����ϰ� �ʱ�ȭ ��, 0���� �������ִ� ���� �����̴� 
	//cin >> b;
	//for (int a = 1; a <= 9; ++a)
	//{
	//	cout << b << " * " << a << " = " << b * a << endl;
	//	// cin >> b; for ���� �ȿ� ������ ���� �ϳ��ۿ� ������ �ʴ´�.  
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