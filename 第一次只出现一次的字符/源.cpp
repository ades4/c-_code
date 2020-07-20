#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	//��str�е��ַ��ڶ�Ӧ��λ�ó�����++����ѭ��һ���ҵ�Ϊ��һ��ֻ����1�ε��ַ�
	int FirstNotRepeatingChar(string str) {
		int arr[256] = { 0 };
		for (int i = 0; i < str.length(); i++) {
			arr[str[i]]++;
		}
		for (int i = 0; i < str.length(); i++) {
			if (arr[str[i]] == 1)
				return i;
		}
		return -1;
	}
};