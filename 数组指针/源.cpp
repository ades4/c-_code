#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

void print_arr1(int arr[3][5], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//��Ҫ���ܶ�ά����ĵ�ַ����һ������ָ��
//�Ѷ�ά���������һά����
//arr�൱��һά�������Ԫ�أ�ÿһ��������Ԫ�أ�
void print_arr2(int(*arr)[5], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//arr+0 --->��һ��   arr+1 --->�ڶ��� ...   
		//arr+i ��i�еĵ�ַ  *(arr+i) ��i�е�Ԫ�� 
 		for (int j = 0; j < col; j++)
		{
			//*(arr+i)+j  ��i���±�Ϊj�ĵ�ַ    *(*(arr+i)+j)  ���ʵ�i���±�Ϊj��Ԫ��
			printf("%d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { 1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10 };
	print_arr1(arr, 3, 5);
	print_arr2(arr, 3, 5);
	system("pause");
	return 0;
}