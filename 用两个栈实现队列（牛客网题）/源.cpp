#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

class Solution
{
public:
	//ջ���Ƚ����  �����Ƚ��ȳ� 
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		int tmp;
		//��Ҫ�ж�stack2�Ƿ�Ϊ�գ�Ҫ�ǿյĻ�ֱ�Ӱ�stack1��push��ȥ��������ֱ�ӳ�ջ
		if (stack2.size() > 0)
		{
			tmp = stack2.top();
			stack2.pop();
		}
		else {
			//��Ҫ��stack1������ȫ�����뵽stack2���Ȼ���ٴ���stack1����push���ݾͻ��������
			while (!stack1.empty())
			{
				stack2.push(stack1.top());
				stack1.pop();
			}
			tmp = stack2.top();
			stack2.pop();
		}

		return tmp;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};