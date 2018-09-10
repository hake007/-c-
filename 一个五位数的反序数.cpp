/* 功能：输入一个五位数，输出对应反序数,并且判断是否是回文数 
    Author:zoulf
    Date:2018.9.8                      */
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	char a,b,c,d,e;
	cout<<"请输入需要转序的五位数："; 
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
//	cout<<"您输入的五位数的反序数是："; 
//	cout<< m<<endl;
	if (m==n)
	{
		cout<<"您的五位数是个回文数："<<m<<"并且它的反序数是："<<m<<endl; 
	}
	else{
		cout<<"您输入的五位数的反序数是："<<m<<endl; 
	}
	return 0;
}
