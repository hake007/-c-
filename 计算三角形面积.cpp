//�˳���������������
/*Author:zou l f
  Date  :2018.9.7  */
#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	short int a,b,c;
	float s,A;
	cout<<"����������������(�ÿո�ֿ�)��";
	cin>>a>>b>>c; 
	s=(a+b+c)/2.0;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"��������ε�����ǣ�"<<A<<endl; 
	return 0;
 } 
