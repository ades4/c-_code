#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>

int main()
{
//	int a = 10;//���ڴ��п���һ��ռ�
//	int *p = &a;//�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&������

	int n = 10;     //00000000 00000000 00000000 00001010   С�˴洢
	//0a 00 00 00
	char *pc = (char*)&n;    //
	int *pi = &n;  
	printf("%p\n", &n);     
	printf("%p\n", pc);     //��&n��ͬ
	printf("%p\n", pc + 1);	  	//��ַ��1   
	printf("%p\n", pi);     //��&n��ͬ
	printf("%p\n", pi + 1);    //��ַ��4

	system("pause");
	return 0;
}