#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>

using namespace std;
//��1
//����Ϊ�ݹ�˼�룬ʱ�临�Ӷȸ�
//&&  ���ǰ��Ϊ�٣����治����
int Sum_Solution(int n) 
{
	(n > 0) && (n += Sum_Solution(n - 1));
	return n;
}

//��2
class Solution
{
public:
	class Sum
	{
	public:
		Sum()
		{
			ret += i;
			i++;
		}
	};
	int Sum_Solution(int n)
	{
		//�������������staticΪ��̬�ģ�������Ҫ��ÿ��ʹ��ǰ�ȳ�ʼ��
		i = 1;
		ret = 0;
		//Sum arr[n];
		//��ε��ù��캯�����м���
		Sum *p = new Sum[n];
		delete[] p;
		return ret;
	}
private:
	static int i;
	static int ret;
};

int Solution::i = 1;
int Solution::ret = 0;


int main()
{
	system("pause");
	return 0;
}
