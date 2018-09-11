/*此程序用于求解一元二次方程的根
Author:zou lf
Date  :2018.9.11               */
#include<iostream>
#include<cmath>
using namespace std;
 int main()
 {
 	double a,b,c,j;
 	double x1,x2,x,delta;
 	cout<<"请输入方程式的三个系数 a,b,c:"<<endl;
 	cout<<"请输入a= ";
	cin>>a;
	cout<<"请输入b= ";
	cin>>b;
	cout<<"请输入c= ";
	cin>>c;  
 	if(a==0)
 	{
 		if(b==0)
 		{
 			cout<<"您输入的数据不构成方程式，请重新输入！";
		}
 		else 
 		{
 			cout<<"方程式的根为："<<"x= "<< -c/b<<endl;
		}	
		 
 		
	}else 
 	    {	       
			delta=sqrt(b*b-4*a*c); 
 	       if(delta>0)
		   {
		   	  x1=(-b+delta)/2*a;
			  x2=(-b-delta)/2*a;
			  cout<<"方程有两根为："<<x1<<"和"<<x2<<endl; 
		   }else if(delta==0)
		         {
		         	x1=-b/2*a;
		         	cout<<"方程根为x1=x2="<<x1<<endl; 
				 }else 
		           {
		           	cout<<"方程没有实根！"<<endl; 
				   }
		  
		}	
 	
 	return 0;
 }
