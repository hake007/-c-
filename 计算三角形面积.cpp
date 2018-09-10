//此程序计算三角形面积
/*Author:zou l f
  Date  :2018.9.7  */
#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	short int a,b,c;
	float s,A;
	cout<<"请输入三角形三边(用空格分开)：";
	cin>>a>>b>>c; 
	s=(a+b+c)/2.0;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"这个三角形的面积是："<<A<<endl; 
	return 0;
 } 
