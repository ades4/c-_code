#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;


int main() {
	string s;
	while (cin >> s) {
		int S_length = s.length();
		string new_S = "";
		for (int i = 0; i < S_length;) {
			int j = i + 1;
			while (s[i] == s[j]) {  //�ҵ�����ȵ��Ǹ�j
				j++;
			}
			if (j - i == 1) { // ���ظ�����ǰһ��ֵ����
				new_S += s[i];
				i++;
			}
			else
				i = j;   //��j��ֵ����i�������ظ����ַ���

		}
		if (new_S == "")
			cout << "no" << endl;
		else
			cout << new_S << endl;
	}
	return 0;
}


/*
//abee12  ��������������
string s_string(string &s, int begin, int end)
{
	string tmp = "";
	for (int i = 0; i < begin; i++) {
		tmp += s[i];
	}
	for (int i = end; i < s.length(); i++) {
		tmp += s[i];
	}
	return tmp;
}

void s_com_string(string &s, int len)
{
	int begin = 0;
	int end = 0;
	string tmp = "", res = "";
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1]) {
			end = i + 1;
		}
		else {
			tmp = s_string(s, begin, end);
			begin = i;
			end++;
		}
	}
	
	if (begin + 1 != end) {
		tmp = s_string(tmp, begin, end);
	}

	s = tmp;
}

int main()
{
	string s;
	while (cin >> s) {
		if (s.length() <= 1) {
			cout << s << endl;
		}
		else {
			s_com_string(s, s.length());

			if (s.length() == 0) {
				cout << "no" << endl;
			}
			else {
				cout << s << endl;
			}
		}
	}
	return 0;
}
*/