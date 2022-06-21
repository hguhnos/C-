#include <iostream>
#include "my_sum.h"

using namespace std; 


// 함수 이름: sum
// 매개 변수(파라메타) : int a, int b
// 반환 값 : int 
// a와 b를 합한 결과를 반환하시오 

int main()
{
	int a = 0;
	int b = 0;
	int c = 0; 

	cout << "첫번째 수를 입력해주세요" << endl;
	cin >> a;

	cout << "두번째 수를 입력해주세요" << endl; 
	cin >> b;

	c = my_sum(a, b); 
	cout << "두 수의 합은 " << c << "입니다" << endl;
}