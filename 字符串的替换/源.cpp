#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

/*
˼·��
- ��Ŀ�����ǽ�x�ƶ���y�ĺ�����Ҫ���ٴ�

- �Ӻ���ǰͳ��y������
- �����һ�μ�⵽xʱ����2��y�ں��棬x�ƶ���Ҫ����
- ��x�ƶ���y�ĸ�����ɱ��������2y������Ҫ����ǰy�ĸ�������Ϊ2*y
- ����ͳ�����õ���Ҫ�ƶ��Ĵ�������y������
*/
const long long mod = pow(10, 9) + 7;
int main()
{
	string s;
	cin >> s;
	long long cur = 0, sum = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] == 'y') {
			cur++;
		}
		if (s[i] == 'x') {
			sum = (sum + cur) % mod;
			cur = (2 * cur) % mod;
		}
	}
	cout << sum << endl;
	return 0;
}


