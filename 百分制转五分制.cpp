/*������������һ������(����Ϊ100)����ת��Ϊһ���������ʽ
Author:zoulf
Date  :2018.9.10       */
#include<iostream>
using namespace std;
int main()
{
	int old_sore;
	cout<<"���������ķ���(0~100)��";
	cin>>old_sore;
	switch(old_sore/10)
	{
		case 10:cout<<"��������Ƴɼ�Ϊ 5"<<endl; 
		       break;
		case 9:cout<<"��������Ƴɼ�Ϊ 5"<<endl;
		       break;
		case 8:cout<<"��������Ƴɼ�Ϊ 4"<<endl; 	   
			   break;
		case 7:cout<<"��������Ƴɼ�Ϊ 3"<<endl; 	   
			    break;
		case 6:cout<<"��������Ƴɼ�Ϊ 2"<<endl;
                break;		
		default :cout<<"��ĳɼ����ϸ�" <<endl; 
		 	    
	}
	return 0;
 } 
