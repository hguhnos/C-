#include <iostream>;
#include "Counter.h"
#include "User.h"

using namespace std; 

void g(const Counter& c) // const = 상수형으로 받는다 = 값만 변경하지 않는다 따라서 참조를 할 수 있다. 
{	
	//const로 클래스를 참조하면 호출하는 클래스에 함수의 형태 또한 const여야 한다 
	cout << "Counter = " << c.getCount() << endl; 
}

int main()
{
	int a = 0; 
	Counter c1; 
	c1.counting();
	c1.counting();
	cout << "c1 Count = " << c1.getCount() << endl;
	c1.counting();
	g(c1);
}