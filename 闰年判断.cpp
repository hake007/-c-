//���������жϳ���
/*Author:zou 
  Date:2018.9.7  */
#include<iostream>
using namespace std;
int main()
{
    short int year;
    bool f; 
    cout<<"������Ҫ�жϵ����year= ";
	cin>>year;
	f=((year%4==0)&&(year%100!=0))||(year%400==0);
	if (f) 
	{
		cout<<year<<"��������"<<endl;
	}else
	{
		cout<<year<<"�겻�����꣡"<<endl;
	 } 
	return 0;
 } 
