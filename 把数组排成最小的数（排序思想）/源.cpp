#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//��Ŀ����
//����һ�����������飬����������������ƴ�������ų�һ��������ӡ��ƴ�ӳ���������������С��һ����
//������������{ 3��32��321 }�����ӡ���������������ųɵ���С����Ϊ321323��

class Solution {
public:
	static bool cmp(int a, int b) {
		//Ҫ��֤�ҵ�a��b���ɵ������У���С�ķ���ǰ��
		string s1 = to_string(a);
		string s2 = to_string(b);
		//�ַ���ƴ�ӽ��бȽ�  a = 1  b = 23
		return s1 + s2 < s2 + s1;
	}

	string PrintMinNumber(vector<int> numbers) {
		string res = "";
		sort(numbers.begin(), numbers.end(), cmp);

		for (int i = 0; i < numbers.size(); i++) {
			res += to_string(numbers[i]);
		}
		return res;
	}
};