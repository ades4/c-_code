#define _CRT_SECURE_NO_WARNINGS 1 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int array[] = { 2,4,6,8 };
	vector<int> v(array, array + sizeof(array) / sizeof(array[0]));


	////�õ�����������ӡ
	//vector<int>::iterator it = v.begin();
	//while (it != v.end())
	//{
	//	cout << *it <<" ";
	//	it++;
	//}
	//cout << endl;

	////�÷��������������ӡ
	//vector<int>::reverse_iterator  rit = v.rbegin();

	////�ó���������������ӡ
	//vector<int>::const_iterator  cit = v.cbegin();


	////��[]������ӡ
	//for (size_t i = 0; i < v.size(); i++)
	//{
	//	cout << v[i] << " ";
	//}
	//cout << endl;
	
	//��auto���б�����ӡ(C++11)
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

//resize  �������·����С���ı������Ĵ�С�����Ҵ�������
//1. ��nС�ڵ�ǰsize()ֵʱ��vector���Ȼ����size()ֵ 
	//����ǰn��Ԫ�أ�Ȼ�󽫳���n��Ԫ��ɾ��(remove and destroy)
//2. ��n���ڵ�ǰsize()ֵʱ��vector�������Ӧ������Ԫ�� ʹ��size()ֵ�ﵽn��
	//������ЩԪ�ؽ��г�ʼ��Ϊ0���������void resize (size_type n, value_type val);
	//ָ��val��vector����val����ʼ����Щ�²����Ԫ��
//3. ��n����capacity()ֵ��ʱ�򣬻��Զ��������·����ڴ�洢�ռ䡣

//	v.resize(2);    //��Ӧ�����1��  ������Ϊ2,4

//	v.resize(6);	//��Ӧ�����2��δ����ʼֵ��������Ϊ2,4,6,8,0,0

//	v.resize(6, 20);	//��Ӧ�����2������ʼֵΪ20��������Ϊ2,4,6,8,20,20

	cout << v.capacity() << endl;	//����������ĳ�ֵ2,4,6,8�������capacityӦ��Ϊ4
	//v.resize(10);		//��Ӧ�����3��������Ϊ2,4,6,8,0,0,0,0,0,0
	//for (auto i : v)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;




//reserver����������vectorԤ����洢����С����capacity��ֵ,����û�и�����ڴ���г�ʼ��
	//void reserve (size_type n)  reserve�Ĳ���n���Ƽ�Ԥ�����ڴ�Ĵ�С��ʵ�ʷ���Ŀ��ܵ��ڻ�������ֵ����n����capacity��ֵ��
	//�ͻ�reallocate�ڴ� capacity��ֵ����ڻ��ߵ���n ��
	//������������push_back����ʹ��size ����ԭ����Ĭ�Ϸ����capacityֵʱ �������ڴ��ط��俪����

//��Ҫע����ǣ�reserve ��������������ڴ�ռ䣬ֻ�Ǳ�ʾvector���������ⲿ���ڴ棬
	//��vector������Ч�ط�����Щ�ڴ�ռ䣬���ʵ�ʱ��ͻ����Խ�����󣬵��³��������
	v.reserve(8);		//�����˿ռ䲢û�г�ʼ��
	cout << v.capacity() << endl;		//���������capacity��8�������������������Ϊ2,4,6,8
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

//	cout << v[5] << endl;	//����ʾ����vector��������Ч�ķ�����Щ�ڴ�ռ�


	cout << v.empty() << endl;			//�ж�vector�Ƿ�Ϊ�գ������1����Ϊ�����0
	cout << v.size() << endl;		//���vector��Ԫ�ظ���
	cout << v.front() << endl;		//�����һ��Ԫ�ص�ֵ
	cout << v.back() << endl;		//�����һ��Ԫ�ص�ֵ
	

//	v.assign(2, 10);

	v.push_back(6);			//���   v.insert(v.end(),X);	
	v.pop_back();			//��ɾ
	v.erase(v.begin());			//ɾ��posλ�õ�ֵ
	v.erase(v.begin(),v.end());		//ɾ��һ�������ֵ

	v.insert(v.begin(), 7);		//��posλ�ò���ֵ
	//v.clear();					//���vector��ֵ

	v.push_back(6);			//���   v.insert(v.end(),X);	
	v.push_back(6);			//���   v.insert(v.end(),X);	

	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		if (*it == 6)
		{
			it = v.erase(it);			//ɾ��posλ�õ�ֵ
		}
	}
	cout << endl;



	//cout << v.at(3) << endl; //����
	//v.at(3) = 10;
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	
	system("pause");
	return 0;
}


//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	size_t sz;
//	vector<int> v;
//	sz = v.capacity();
//	for (int i = 0; i < 100; ++i) {
//		v.push_back(i);
//		if (sz != v.capacity()) {
//			sz = v.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//	system("pause");
//	return 0;
//}


