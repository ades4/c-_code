#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};

class Solution {
public:
	//����ָ��Ҳ����ʵ��   --- ����
	//ʹ�ÿ���ָ�룬��ָ��ÿ����ǰһ������ָ��ÿ������  ��ָ���������л�

	ListNode* EntryNodeOfLoop(ListNode* pHead)
	{
		vector<ListNode*> v;
		if (pHead == NULL && pHead->next == NULL) {
			return NULL;
		}
		else {
			ListNode* cur = pHead;
			while (cur) {
				//���ڻ��Ļ�û�취ȫ�����vector��
				//��һ�ε�ʱ��vector����û������Ҫ����
				if (v.size() != 0) {
					for (int i = 0; i < v.size(); i++) {
						if (cur == v[i]) {
							return cur;
						}
					}
				}
				v.push_back(cur);
				cur = cur->next;
			}
		}
		return NULL;
	}
};