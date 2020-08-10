#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

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
	//�����
	int TreeDepth(TreeNode* pRoot) {
		if (pRoot == NULL)
			return NULL;

		int left = TreeDepth(pRoot->left);
		int right = TreeDepth(pRoot->right);

		return left > right ? left + 1 : right + 1;
	}

	bool IsBalanced_Solution(TreeNode* pRoot) {
		//ƽ������� - �κ������ĸ߶Ȳ�С�ڵ���1
		if (pRoot == NULL)
			return true;
		int leftTree = TreeDepth(pRoot->left);
		int rightTree = TreeDepth(pRoot->right);

		if (abs(leftTree - rightTree) > 1)
			return false;

		return IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right);
	}

};