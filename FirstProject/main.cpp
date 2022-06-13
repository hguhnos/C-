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

//�ð� t1�� t2�� ���Ѵ�.
void AddTime(TimeRec& t1, const TimeRec& t2);
void AddTime(TimeRec& t1, int minutes);

//�迭�� ���迭 ��ȣ�� ���� �־��ְ� ���� ���� ���� ��ȯ
double GetArraySum(double arr[], int n);

//�л� ���ϱ� 
double variance(double arr[], int n);

void printSum(double sum);

//�ΰ��� ���� ���� �ٲٱ�
void SwapValues(int& x, int& y);

void PrSalesRec(SalesRec& srec); //4&8Byte -> �޸� ����

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
	cout << "�ΰ��� ���� �Է��ϼ��� : ";
	cin >> a >> b;
	SwapValues(a, b);
	cout << "a = " << a << "b = " << b << endl;

	SalesRec stRec; //62Byte ����� �뷮�� stRec�� �����Ѵ�
	strcpy_s(stRec.pID, "123456789");
	stRec.dYear = 2022;
	stRec.dMonth = 6;
	stRec.dData = 8;
	strcpy_s(stRec.deliverAddr, "���� Ư���� ���빮�� �̹���");
	PrSalesRec(stRec);

	}
	*/

	/*
	1.void f(int a, int b);
	//int func(int a, int b); 
	2.void func(int a, int b, int c = 100);

	func(a,b); // 1���� 2�� �� ��� �����ؾ� �ϴ��� ��ȣ�Ͽ� ������ �߻� 

	a.void func(int a);
	b.void func(float a);

	fun(10);
	func(10.0f);
	func(10.0); //double���� ������ ��� a�� ȣ���ؾ��ϴ��� b�� ȣ���ؿ��ϴ��� ��ȣ�Ͽ� ���� �߻� 
	*/

	TimeRec time1 = { 2, 20, 40 };
	TimeRec time2 = { 1, 55, 40 };


	cout << time1.hours << "�ð�" << time1.minutes << "��" << time1.seconds << "�� + " ;
	cout << time2.hours << "�ð�" << time2.minutes << "��" << time1.seconds << "�� = ";
	AddTime(time1, time2);
	cout << time1.hours << "�ð�" << time1.minutes << "��" << time1.seconds << "�� " << endl;

	/*
	cout << time1.hours << "�ð�" << time1.minutes << "��" << time1.seconds << "�� + ";
	cout << time2.hours << "�ð�" << time2.minutes << "��" << time1.seconds << "�� = ";
	AddTime(time1, time2);
	cout << time1.hours << "�ð�" << time1.minutes << "��" << time1.seconds << "�� " << endl;
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

	void SwapValues(int& x, int& y) //& ���� const�� ���̸� ������ �����ϸ� ���������� �Ұ�
	{
		int temp = x;
		x = y;
		y = temp;
	}

	void PrSalesRec(SalesRec & srec) //4&8Byte -> �޸� ����
	{
		cout << "ǰ���ڵ�:" << srec.pID << endl;
		cout << "�������:" << srec.dYear << "��" << endl;
		cout << srec.dMonth << "��" << srec.dData << "��" << endl;
		cout << "����ּ� :" << srec.deliverAddr << endl;
	}
