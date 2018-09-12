/*此程序实现一部分计算器的运算功能
Author:zou lf
Date  :2018. 9.12*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num1,num2;
	char   op;
	cout<<"请输入需要计算的两个数："<<endl; 
	cout<<"请输入num1:";
	cin>>num1;
	cout<<"请输入num2:";
	cin>>num2;
	cout<<"请输入计算符：";
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
		            	cout<<"分母不能为0，请重新输入！"; 
					}else
						{
							cout<<num1<<op<<num2<<"="<<num1/num2<<endl;
						}
				  break;		
		default:cout<<"你输入的运算符不合法！"<<endl;			
	}	
	return 0;
}
 
