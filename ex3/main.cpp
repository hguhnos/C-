#include <iostream>
#include "my_sum.h"

using namespace std; 


// �Լ� �̸�: sum
// �Ű� ����(�Ķ��Ÿ) : int a, int b
// ��ȯ �� : int 
// a�� b�� ���� ����� ��ȯ�Ͻÿ� 

int main()
{
	int a = 0;
	int b = 0;
	int c = 0; 

	cout << "ù��° ���� �Է����ּ���" << endl;
	cin >> a;

	cout << "�ι�° ���� �Է����ּ���" << endl; 
	cin >> b;

	c = my_sum(a, b); 
	cout << "�� ���� ���� " << c << "�Դϴ�" << endl;
}