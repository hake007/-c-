/*�˳���ʵ��һ���ּ����������㹦��
Author:zou lf
Date  :2018. 9.12*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num1,num2;
	char   op;
	cout<<"��������Ҫ�������������"<<endl; 
	cout<<"������num1:";
	cin>>num1;
	cout<<"������num2:";
	cin>>num2;
	cout<<"������������";
	cin>>op; 
	switch(op)
	{
		case '+': cout<<num1<<op<<num2<<"="<<num1+num2<<endl;
		          break;
		case '-': cout<<num1<<op<<num2<<"="<<num1-num2<<endl;
		          break;
		case '*': cout<<num1<<op<<num2<<"="<<num1*num2<<endl;
		          break;
		case '/': if(num2==0)  
		            {
		            	cout<<"��ĸ����Ϊ0�����������룡"; 
					}else
						{
							cout<<num1<<op<<num2<<"="<<num1/num2<<endl;
						}
				  break;		
		default:cout<<"���������������Ϸ���"<<endl;			
	}	
	return 0;
}
 
