/*���ܣ��˳����õ����滻�㷨���ܣ����û�����һ��Ҫ���ܵ���ĸ�� 
Ҫ�滻����Կ���� 
Author:zoulf
Date  :2018.9.9  */
#include<iostream>
using namespace std;
int main()
{
	char c,en;
	int k;
	cout<<"��������Ҫ���ܵ���ĸc=";
	cin>>c;
	cout<<"��������Կ�ĳ���k=";
	cin>>k;
	en=((c-'a')+k)%26+'a';//����һ����ĸ��0��ʼ�Ƚϣ����Ҽ�����Կ���ȡ� 
	cout<<"�������һ����ĸ���ܺ�Ϊ��";
	cout<<en<<endl; 
	return 0;
 } 

