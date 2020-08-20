#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//����һ�������������е�һ����㣬���ҳ��������˳�����һ����㲢�ҷ��ء�
//ע�⣬���еĽ�㲻�����������ӽ�㣬ͬʱ����ָ�򸸽���ָ�롣

struct TreeLinkNode {
	int val;
	struct TreeLinkNode *left;
	struct TreeLinkNode *right;
	struct TreeLinkNode *next;
	TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {

	}
};

class Solution {
public:
	TreeLinkNode* GetNext(TreeLinkNode* pNode)
	{
		if (pNode == NULL)
			return NULL;

		if (pNode->right == NULL)
		{
			if (pNode->next == NULL) {
				//ͷ���
				return NULL;
			}
			else if (pNode->left == NULL) {
				if (pNode->next->right == pNode) {
					TreeLinkNode* cur = pNode;
					while (cur->next) {
						//�ҵ�ͷ���
						cur = cur->next;
					}

					TreeLinkNode* next = cur;
					while (next->right) {
						next = next->right;
					}
					if (next == pNode)
						//���һ�����
						return NULL;
					else
						return cur;
				}
				else if (pNode->next->left == pNode) {
					return pNode->next;
				}
			}
			else {
				return pNode->next;
			}
		}
		else {
			if (pNode->next == NULL) {
				//ͷ���
				if (pNode->right->left == NULL)
					return pNode->right;
				else
					return pNode->right->left;
			}
			else {
				return pNode->right;
			}
		}
	}
};