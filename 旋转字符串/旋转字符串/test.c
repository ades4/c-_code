#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
void left_rotate1(char *stc, int k)
{
	//����K��
	while (k--)
	{   
		//����1��
		//�����һ��λ������
		char tmp = *stc;
		char *cur = stc;
		while (*(cur + 1) != '\0')
		{
			//��ǰ�ƶ�һλ
			*cur = *(cur + 1);
			cur++;
		}
		//�ѵ�һ��λ�õ����ݷ���ĩβ
		*cur = tmp;
	}
}

//�ַ�����ת

void reverse(char *str, char *end)
{
	while (str < end)
	{
		char temp = *str;
		*str = *end;
		*end = temp;
		str++;
		end--;
	}
}

//������ת��
void left_rotate2(char *str, int k)
{
	k = k % strlen(str);
	//��תǰK
	reverse(str, str + k - 1);
	//��תʣ��
	reverse(str + k, str + strlen(str) - 1);
	//������ת
	reverse(str, str + strlen(str) - 1);
}
void right_rotate1(char *str, int k)
{
	k = k % strlen(str);
	//������ת
	reverse(str, str + strlen(str) - 1);
	//��תǰK
	reverse(str, str + k - 1);
	//��תʣ��
	reverse(str + k, str + strlen(str) - 1);
}
void right_rotate2(char *str, int k)
{
	left_rotate1(str, strlen(str) - k);
}
int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	int k = 0;
	scanf("%d", &k);
	left_rotate1(arr,k);
	printf("����%d��", k);
	printf("%s\n", arr);
	left_rotate2(arr, k);
	printf("����%d��", k);
	printf("%s\n", arr);
	right_rotate1(arr, k);
	printf("����%d��", k);
	printf("%s\n", arr);
	right_rotate2(arr, k);
	printf("����%d��", k);
	printf("%s\n", arr);
	system("pause");
	return 0;
}