#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
//һά����
	//int arr1[] = {1, 3};

	//int arr2[10];
	//for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++) {
	//	arr2[i] = i;
	//}

	//char arr3[] = "abc";

	//char arr4[3] = { 'a','b','c' };

	vector<int> v1;
	v1.push_back(1);

//��ά����

	// ����һ��δ֪��С��int�Ͷ�ά����vv1
	vector<vector<int> > vv1;
	
	for (int i = 0; i < vv1.size(); i++) {
		vv1[i].resize(5);     
	}
	//vv.resize(int n,element)��ʾ��������vv�Ĵ�СΪn
	//���ݺ��ÿ��Ԫ�ص�ֵΪelement��Ĭ��Ϊ0
	//resize��reserve����
	//https ://blog.csdn.net/VampirEM_Chosen_One/article/details/50519870


	//for (int i = 0; i < 5; i++)
	//{
	//	vv1.push_back(vector<int>());//������vv1����� 
	//}
	//for (int i = 0; i < vv1.size(); i++)//�� 
	//{
	//	for (int j = 0; j < 5; j++)//���5�� 
	//	{
	//		vv1[i].push_back(i*j);
	//	}
	//}

	//��������Ԫ�أ�ÿ��Ԫ�غ���4��int��Ԫ�ص�����
	//vector<vector<int> > vv3(3, vector<int>(4));



	for (int i = 0; i < vv1.size(); i++) {
		for (int j = 0; j < 5; j++) {
			cout << vv1[i][j] << ' ';
		}
		cout << endl;
	}

}