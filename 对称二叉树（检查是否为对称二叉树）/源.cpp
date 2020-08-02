#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

//https://www.nowcoder.com/practice/ff05d44dfdb04e1d83bdbdab320efbcb?tpId=13&&tqId=11211&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//��ʵ��һ�������������ж�һ�ö������ǲ��ǶԳƵġ�
//ע�⣬���һ��������ͬ�˶������ľ�����ͬ���ģ�������Ϊ�ԳƵġ�
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:

	//�Ƚ϶�Ӧ�����������Ƿ���ͬ

	bool isSymmetrical(TreeNode* pRoot)
	{
		if (pRoot == NULL)
			return true;
		return isSymmetricalTree(pRoot->right, pRoot->left);
	}

	bool isSymmetricalTree(TreeNode* node1, TreeNode* node2) {
		if (node1 == NULL && node2 == NULL)
			return true;

		if (node1 == NULL || node2 == NULL)
			return false;

		if (node1->val != node2->val)
			return false;

		return isSymmetricalTree(node1->left, node2->right)\
			& isSymmetricalTree(node1->right, node2->left);
	}
};
