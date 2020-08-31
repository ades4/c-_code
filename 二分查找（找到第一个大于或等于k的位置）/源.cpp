#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

//��ʵ�����ظ����ֵ���������Ķ��ֲ��ҡ�
//����������е�һ�����ڵ��ڲ���ֵ��λ�ã�
//��������в�����������������������鳤�ȼ�һ��

int upper_bound_(int n, int v, vector<int>& a) {
	int begin = 0, end = n - 1, mid = 0;
	int flag = 0;
	if (n == 0)
		return 1;
	else {
		while (begin < end)
		{
			mid = (begin + end) / 2;
			//�ҵ���ǰֵΪ���ڵ���v����ǰһ��ֵһ��С��v����
			if (a[mid] >= v) {
				if (mid == 0 || a[mid - 1] < v)
					return mid + 1;
				else
					end = mid - 1;
			}
			else {
				begin = mid + 1;
			}
		}
		return n + 1;
	}
}
int main()
{
	vector<int> a = { 1,1,2,3,7,7,7,9,9,10 };
	int n = 10;
	int v = 2;
	int num = upper_bound_(n, v, a);
	cout << num << endl;

	system("pause");
	return 0;
}