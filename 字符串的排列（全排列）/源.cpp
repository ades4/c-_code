#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//next_permutation  ȫ���к���
vector<string> Permutation(string str) {
	vector<string> res;

	if (str.size() == 0)
		return res;
	do {
		res.push_back(str);
	} while (next_permutation(str.begin(), str.end()));

	sort(res.begin(), res.end());
	return res;
}
//
////���ݵ�˼��
//void swap(string &str, int i, int j) {
//	char tmp = str[i];
//	str[i] = str[j];
//	str[j] = tmp;
//}
//
//bool IsExist(string &str, vector<string> &res) {
//	for (int i = 0; i < res.size(); i++) {
//		if (res[i] == str) {
//			return true;
//		}
//	}
//	return false;
//}
//
//void PermutationHelper(string &str, int start, vector<string> &res) {
//	if (start == str.length() - 1) {
//		if (IsExist(str, res) != true) {
//			res.push_back(str);
//		}
//		return;
//	}
//
//	for (int i = start; i < str.size(); i++) {
//		swap(str, start, i);    //ȷ�����ĸ��ַ���Ϊ��ʼ
//		PermutationHelper(str, start + 1, res);
//		swap(str, start, i);    //�������������¿�ʼ��һ��
//	}
//}
//
//vector<string> Permutation(string str) {
//	vector<string> res;
//	if (str.length() == 0)
//		return res;
//
//	PermutationHelper(str, 0, res);
//	//���ֵ���������򷵻�
//	sort(res.begin(), res.end());
//	return res;
//}

int main()
{
	string s;
	cin >> s;
	vector<string> res;
	res = Permutation(s);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
	system("pause");
	return 0;
}