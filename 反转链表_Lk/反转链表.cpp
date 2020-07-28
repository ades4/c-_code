#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
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
	/*
		//����ָ��
		ListNode* ReverseList(ListNode* pHead) {
			if(pHead == NULL || pHead->next == NULL)
				return pHead;

			ListNode* prev = pHead;
			ListNode* cur = pHead->next;
			ListNode* next = cur->next;

			while(next != NULL){
				//��ת
				cur->next = prev;
				prev = cur;
				cur = next;
				next = next->next;
			}
			cur->next = prev; //�����������ֻ�������ڵ� or ������ת����ʱ�����һ���ڵ㲢δ��ת
			pHead->next = NULL;
			pHead = cur;  //ͷָ��ָ�����һ���ڵ�
			return pHead;
		}
	*/
	//ͷ�巨
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL || pHead->next == NULL)
			return pHead;

		ListNode* newhead = NULL;
		while (pHead != NULL) {
			//������һ�����
			ListNode* p = pHead;
			pHead = pHead->next;

			//ͷ���½��
			p->next = newhead;
			newhead = p;
		}
		return newhead;
	}
};



