#define _CRT_SECURE_NO_WARNINGS 1 

//�Ƚ������ַ�����str1, str2��, ���str1�е���ĸ����������Ϻ�
//������ϳ�str2���򷵻�True�����򷵻�False
//1. ��ǰ����������Сд��ĸ
//���磺
//('rkqodlw', 'world')   ���� True
//adefwr  rwf
//adwfrw  frw
//('katas', 'steak')  ����False

//���Կ���ɾ���ַ����ķ�ʽ
//Ȼ������жϴ���


#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



//����85%
/*
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2) {
		if (s1.length() == 0 || s2.length() == 0 ||(s2.length() > s1.length())) {
			cout << "False" << endl;
		}
		else {
			sort(s1.begin(), s1.end());
			sort(s2.begin(), s2.end());

			char tmp = s2[0];
			int begin = 0;
			int len_s1 = s1.length();
			int len_s2 = s2.length();

			for (int i = 0; i < len_s1; i++) {
				if (tmp == s1[i]) {
					begin = i;
					break;
				}
			}
			//abde  aab
			for (int i = begin+1, j = 1; i < len_s1, j < len_s2; ) {
				if (s1[i] == s2[j] && (j != len_s2 - 1)) {
					i++;
					j++;
				}
				else if(s1[i] != s2[j] && (j != len_s2 - 1)) {
					i++;
				}

				if ((i == len_s1) && (j <= len_s2 - 1) && (s1[i] == s2[j])) {
					cout << "True" << endl;
					break;
				}
				else if((i <= len_s1 - 1) && (s1[i] != s2[j]) && (j == len_s2 - 1 )) {
					cout << "False" << endl;
					break;
				}
				else if((j <= len_s2 - 1) && (i == len_s1)){
					cout << "False" << endl;
					break;
				}
			}
		}
	}
	system("pause");
	return 0;
}
*/