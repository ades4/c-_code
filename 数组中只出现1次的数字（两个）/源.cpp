#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>

using namespace std;

void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
	//�����  �����ͬΪ0����ͬΪ1����ȥ���������ظ���ֵ
	int tmp = data[0];
	for (int i = 1; i < data.size(); i++) {
		tmp ^= data[i];
	}
	//�õ���tmpֵΪ����ֻ����һ�ε����ֵ������ֵ������Ķ������е�1�����ֵ���A��B�Ĳ�ͬ��λ

	//��tmp��32������λ��ֵ�����ж�
	//&   0&0=0  0&1=0  1&0=0  1&1=1
	//�� 00...01 ����&
	//��һ�κ�00...10&
	//ֱ���ҵ���һ������λΪ1

	//4 6 1 1 1 1
	//000100
	//000110
	//000010  ----- 2
	//000001
	int flag = 1;    //��־λΪ1  ��1&����ͬΪ1��������������if
	for (int i = 0; i < 32; i++) {
		if (tmp & flag) {
			break;
		}
		flag <<= 1;
	}

	//�������
	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < data.size(); i++) {
		if (data[i] & flag) {  // 000100  000010
			*num1 ^= data[i];   //000000
		}
		else   //000110   000010
			*num2 ^= data[i];  //000010
	}
}