/*�˳����������һԪ���η��̵ĸ�
Author:zou lf
Date  :2018.9.11               */
#include<iostream>
#include<cmath>
using namespace std;
 int main()
 {
 	double a,b,c,j;
 	double x1,x2,x,delta;
 	cout<<"�����뷽��ʽ������ϵ�� a,b,c:"<<endl;
 	cout<<"������a= ";
	cin>>a;
	cout<<"������b= ";
	cin>>b;
	cout<<"������c= ";
	cin>>c;  
 	if(a==0)
 	{
 		if(b==0)
 		{
 			cout<<"����������ݲ����ɷ���ʽ�����������룡";
		}
 		else 
 		{
 			cout<<"����ʽ�ĸ�Ϊ��"<<"x= "<< -c/b<<endl;
		}	
		 
 		
	}else 
 	    {	       
			delta=sqrt(b*b-4*a*c); 
 	       if(delta>0)
		   {
		   	  x1=(-b+delta)/2*a;
			  x2=(-b-delta)/2*a;
			  cout<<"����������Ϊ��"<<x1<<"��"<<x2<<endl; 
		   }else if(delta==0)
		         {
		         	x1=-b/2*a;
		         	cout<<"���̸�Ϊx1=x2="<<x1<<endl; 
				 }else 
		           {
		           	cout<<"����û��ʵ����"<<endl; 
				   }
		  
		}	
 	
 	return 0;
 }
