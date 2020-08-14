#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	//������
	//�������ҵ���һ����Ϊ0����С�������ƣ��ͺ���Ľ��бȽϣ�Ҫ�����ظ���������
	//1 2 3 4 5   
	//���һ��ֵ�͵�һ��ֵ���ܴ���4����Ȼ����Ҳ������˳��
	bool IsContinuous(vector<int> numbers) {
		if (numbers.size() <= 0)
			return false;

		sort(numbers.begin(), numbers.end());

		int count = 0;
		for (int i = 0; i < numbers.size(); i++) {
			if (numbers[i] == 0)
				count++;
		}

		for (int i = count; i < numbers.size(); i++) {
			//�Ӳ������ĵ�һ��ֵ������ıȽϣ��Ƿ�Ϊ˳��
			if (numbers[i] == numbers[i + 1])
				return false;
		}

		if (numbers[numbers.size() - 1] - numbers[count] <= 4)
			return true;
		return false;
	}
};