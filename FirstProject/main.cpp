#include <iostream>
using namespace std;

struct SalesRec { //62Byte
	char pID[10]; //10Byte
	int dYear, dMonth, dData; //3*4Byte = 12Byte
	char deliverAddr[40]; //40Byte
};

struct TimeRec {

	int hours;
	int minutes; 
	int seconds;
};

//시간 t1에 t2를 더한다.
void AddTime(TimeRec& t1, const TimeRec& t2);
void AddTime(TimeRec& t1, int minutes);

//배열에 각배열 번호의 값을 넣어주고 전부 합한 값을 반환
double GetArraySum(double arr[], int n);

//분산 구하기 
double variance(double arr[], int n);

void printSum(double sum);

//두개의 수를 서로 바꾸기
void SwapValues(int& x, int& y);

void PrSalesRec(SalesRec& srec); //4&8Byte -> 메모리 절약

int main()
{
	/*
	double a[50], b[100];
	double sum = 0;

	sum = GetArraySum(a, 50);

	printSum(sum);

	sum = GetArraySum(b, 100);

	printSum(sum);

	return 0;
	*/

	/*int a, b = {0};
	cout << "두개의 수를 입력하세요 : ";
	cin >> a >> b;
	SwapValues(a, b);
	cout << "a = " << a << "b = " << b << endl;

	SalesRec stRec; //62Byte 상당의 용량을 stRec이 차지한다
	strcpy_s(stRec.pID, "123456789");
	stRec.dYear = 2022;
	stRec.dMonth = 6;
	stRec.dData = 8;
	strcpy_s(stRec.deliverAddr, "서울 특별시 동대문구 이문동");
	PrSalesRec(stRec);

	}
	*/

	/*
	1.void f(int a, int b);
	//int func(int a, int b); 
	2.void func(int a, int b, int c = 100);

	func(a,b); // 1번과 2번 중 어디를 선택해야 하는지 모호하여 에러가 발생 

	a.void func(int a);
	b.void func(float a);

	fun(10);
	func(10.0f);
	func(10.0); //double형의 선언이 없어서 a를 호출해야하는지 b를 호출해여하는지 모호하여 에러 발생 
	*/

	TimeRec time1 = { 2, 20, 40 };
	TimeRec time2 = { 1, 55, 40 };


	cout << time1.hours << "시간" << time1.minutes << "분" << time1.seconds << "초 + " ;
	cout << time2.hours << "시간" << time2.minutes << "분" << time1.seconds << "초 = ";
	AddTime(time1, time2);
	cout << time1.hours << "시간" << time1.minutes << "분" << time1.seconds << "초 " << endl;

	/*
	cout << time1.hours << "시간" << time1.minutes << "분" << time1.seconds << "초 + ";
	cout << time2.hours << "시간" << time2.minutes << "분" << time1.seconds << "초 = ";
	AddTime(time1, time2);
	cout << time1.hours << "시간" << time1.minutes << "분" << time1.seconds << "초 " << endl;
	*/
}


void AddTime(TimeRec& t1, const TimeRec& t2)
{
	t1.seconds += t2.seconds;
	t1.minutes += t2.minutes + (t1.seconds / 60);
	t1.hours += t2.hours + (t1.minutes / 60);
	t1.seconds %= 60;
	t1.minutes %= 60;
	t1.hours %= 60;
}

/*
void AddTime(TimeRec& t1, int minutes,)
{
	t1.minutes += minutes;
	t1.hours += (t1.minutes / 60);
	t1.minutes %= 60;
}
*/

double GetArraySum(double arr[], int n)
{
		for (int i = 0; i < n; ++i)
		{
			double sum = 0;
			for (int i = 0; i < n; ++i)
			{
				arr[i] = i;
				sum += arr[i];
			}
			return sum;
		}
}
	double variance(double arr[], int n)
	{
		double sum = 0, sqSum = 0;
		for (int i = 0; i < n; ++i)
		{
			sum += arr[i];
			sqSum += arr[i] * arr[i];
		}
		double result = sqSum / n - sum / (n * n);
		return result;
	}

	void printSum(double sum)
	{
		cout << "Sum = " << sum << endl;
	}

	void SwapValues(int& x, int& y) //& 참조 const를 붙이면 참조만 가능하며 원본수정은 불가
	{
		int temp = x;
		x = y;
		y = temp;
	}

	void PrSalesRec(SalesRec & srec) //4&8Byte -> 메모리 절약
	{
		cout << "품목코드:" << srec.pID << endl;
		cout << "배달일자:" << srec.dYear << "년" << endl;
		cout << srec.dMonth << "월" << srec.dData << "일" << endl;
		cout << "배달주소 :" << srec.deliverAddr << endl;
	}
