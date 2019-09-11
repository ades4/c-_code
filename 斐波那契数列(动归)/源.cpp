#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;
int num = 0;
//class Solution {
//public:
//	int Fibonacci(int n) {
//		vector<int> F(n + 1, 0);  //��ʼ��Ϊ0  1.״̬�Ķ���
//		num++;
//		F[1] = 1;   //2.״̬�ĳ�ʼ��
//
//		for (int i = 2; i <= n; i++)
//		{
//			F[i] = F[i - 1] + F[i - 2];   //3.״̬ת�Ʒ���   
//		}
//		return F[n];  //4.����ֵ
//	}
//};

//�Ż����ѿռ临�Ӷȱ��O(1)


class Solution {
public:
	int Fibonacci(int n) {
		num++;
		if (n <= 0)
			return 0;
		if (n == 1 || n == 2)
			return 1;
		
		int fn, fn1, fn2;  
		fn1 = fn2 = 1; 

		for (int i = 3; i <= n; i++)
		{
			fn = fn1 + fn2;   //״̬ת�Ʒ���
			fn2 = fn1;
			fn1 = fn;
		}
		return fn;  //����ֵ
	}
};

//int num = 0;
//class Solution {
//public:
//	int Fibonacci(int n) {
//		num++;
//		if (n <= 0)
//			return 0;
//		if (n == 1 || n == 2)
//			return 1;
//		else
//			return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//};

int main()
{
	int n;
	Solution s;
	while (cin >> n)
	{
		cout << "���ս����: " << s.Fibonacci(n) << " ";
		cout << "���������ô���: " << num << endl;
		num = 0;
	}
	system("pause");
	return 0;
}

