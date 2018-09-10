//这是闰年判断程序
/*Author:zou 
  Date:2018.9.7  */
#include<iostream>
using namespace std;
int main()
{
    short int year;
    bool f; 
    cout<<"请输入要判断的年份year= ";
	cin>>year;
	f=((year%4==0)&&(year%100!=0))||(year%400==0);
	if (f) 
	{
		cout<<year<<"年是闰年"<<endl;
	}else
	{
		cout<<year<<"年不是闰年！"<<endl;
	 } 
	return 0;
 } 
