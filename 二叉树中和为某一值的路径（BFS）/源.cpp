#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

//����һ�Ŷ������ĸ��ڵ��һ�����������ֵ����ӡ���������н��ֵ�ĺ�Ϊ��������������·����
//·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����


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
	void FindPathDFS(TreeNode* root, int expectNumber, vector<vector<int> > &res, vector<int> &list) {
		if (root == NULL)
			return;

		list.push_back(root->val);
		expectNumber -= root->val;

		//�Ѿ���Ҷ�ӽ�㣬�Ҵ���·����������
		if (root->left == NULL && root->right == NULL && expectNumber == 0)
			res.push_back(list);
		//dfs�Ĺ���
		FindPathDFS(root->left, expectNumber, res, list);
		FindPathDFS(root->right, expectNumber, res, list);

		//�����������������ˣ��Ҳ������������ͳ��ѵ�ǰ������ʱ�洢ɾ��
		//������һ��Ĺ���
		list.pop_back();
	}

	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
		vector<vector<int> > res;  //�����
		if (root == NULL)
			return res;

		vector<int> list; //��ʱ�洢
		FindPathDFS(root, expectNumber, res, list);
		return res;
	}
};