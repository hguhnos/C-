#pragma once
#include <iostream>

using namespace std;

class VecF

{	//������ ũ�� (vec1�� - float 3��, vec2�� - float 6��, vec3�� - float 9��)
	//float�� ���� = d
	
	int n;
	float* arr; //���� float ���� �迭 ���� ������ // array�� float���� ���� �Ŵ� 

public: 
	VecF(int d, float* a = nullptr) : n{ d }
	{
		arr = new float[d]; // arr�� float�� d�迭 ���� ���� 
		if (a) memcpy(arr, a, sizeof(float) * n); //memcopy = �޸� ī�� // arr�� a���� sizeof(float) * nũ�� ��ŭ �����Ѵ� // �׷��� if(a) �� �����ΰ�? a = nullptr���� ���� ���� �����ȴ�
	}
	//VecF(const VecF& fv) : n{fv.n}, arr{fv.arr} {} //arr �ּҰ� �״�� ����Ǿ� ���� ���� ������ ���� 
	VecF(const VecF& fv) : n{ fv.n }
	{
		arr = new float[n];
		memcpy(arr, fv.arr, sizeof(float) * n);
	}
	~VecF() 
	{
		delete[]arr;
	}

	VecF add(const VecF& fv) const
	{
		VecF tmp{ n };
		for (int i = 0; i < n; ++i)
		{
			tmp.arr[i] = arr[i] + fv.arr[i];
		}
		return tmp;
	}

	void print() const
	{
		cout << " [ ";
		for (int i = 0; i < n; ++i)
			cout << arr[i] << " ";
		cout << " ] ";
	}
};

