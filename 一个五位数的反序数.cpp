/* ���ܣ�����һ����λ���������Ӧ������,�����ж��Ƿ��ǻ����� 
    Author:zoulf
    Date:2018.9.8                      */
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	char a,b,c,d,e;
	cout<<"��������Ҫת�����λ����"; 
	cin>>n;
/*	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	n=n/10;
	e=n;   */
	a=n%10;
	b=(n/10)%10;
	c=(n/100)%10;
	d=(n/1000)%10;
	e=(n/10000);
	m=((((a*10+b)*10+c)*10+d)*10+e);
//	cout<<"���������λ���ķ������ǣ�"; 
//	cout<< m<<endl;
	if (m==n)
	{
		cout<<"������λ���Ǹ���������"<<m<<"�������ķ������ǣ�"<<m<<endl; 
	}
	else{
		cout<<"���������λ���ķ������ǣ�"<<m<<endl; 
	}
	return 0;
}
