#define _CRT_SECURE_NO_WARNINGS 1 

//������ֽ��ɴ�СдӢ����ĸ����ҳ��Ȳ�����10��
//��������Ϊ�����������ʵ��Ч�ģ�������ж�Ϊ������д�ʾ�
/*
5
BA
aOWVXARgUbJDG
OPPCSKNS
HFDJEEDA
ABBABBBBAABBBAABAAA
*/

/*

#include <iostream>
#include <string>
using namespace std;

int fun(string &name)
{
	int res = 0;
	if (name.length() <= 0 || name.length() > 10) {
		return res;
	}
	else {
		int flag = 0;
		for (int i = 0; i < name.length();) {
			if (name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z')
			{
				i++;
			}
			else {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			res = 1;
		}
	}
	return res;
}

int main()
{
	int n, res = 0;
	string name;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++) {
			cin >> name;
			res += fun(name);
		}
		cout << res << endl;
	}
	system("pause");
	return 0;
}
*/

//����һ��1��N������P1��PN��NΪż��������ʼʱPi = i��1��i��N����
//����Ҫ�����н���M�β�����ÿ�β���Ϊ����������һ�֣�
//�ٽ����еĵ�1�����Ƶ�ĩβ��
//�ڽ������еĵ�1�������2��������3�������4������...����N - 1�������N������
//�󾭹���M�β�����õ������С�

/*
��һ�а�����������N��M��2��N��M��105��

�ڶ��а���M���ո����������t1��tM��1��ti��2����ti=1��
���ʾ��i�β���Ϊ�����٣���ti=2�����ʾ��i�β���Ϊ�����ڡ�
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fun1(vector<int> &v)
{
	vector<int> res;
	int tmp = v[0];
	for (int i = 1; i < v.size(); i++) {
		res.push_back(v[i]);
	}
	res.push_back(tmp);
	v = res;
}

void fun2(vector<int> &v)
{
	if (v.size() % 2 == 0) {
		for (int i = 0; i < v.size(); ) {
			swap(v[i], v[i + 1]);
			i += 2;
		}
	}
	else {
		for (int i = 0; i < v.size() - 1; ) {
			swap(v[i], v[i + 1]);
			i += 2;
		}
	}
}

int main()
{
	int N, tmp;
	long M;
	vector<int> v , od;
	while (cin >> N >> M)
	{
		for (int i = 1; i <= N; i++) {
			v.push_back(i);
		}

		for (int i = 0; i < M; i++) {
			cin >> tmp;
			od.push_back(tmp);
		}

		for (int i = 0; i < M; i++) {
			if (od[i] == 1) {
				fun1(v);
			}
			else if (od[i] == 2) {
				fun2(v);
			}
			else
				break;
		}

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
		}
		cout << endl;
		v.clear();
	}

	system("pause");
	return 0;
}