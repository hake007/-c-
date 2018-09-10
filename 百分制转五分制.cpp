/*程序功能是输入一个分数(满分为100)，后转化为一个五分制形式
Author:zoulf
Date  :2018.9.10       */
#include<iostream>
using namespace std;
int main()
{
	int old_sore;
	cout<<"请输入您的分数(0~100)：";
	cin>>old_sore;
	switch(old_sore/10)
	{
		case 10:cout<<"您的五分制成绩为 5"<<endl; 
		       break;
		case 9:cout<<"您的五分制成绩为 5"<<endl;
		       break;
		case 8:cout<<"您的五分制成绩为 4"<<endl; 	   
			   break;
		case 7:cout<<"您的五分制成绩为 3"<<endl; 	   
			    break;
		case 6:cout<<"您的五分制成绩为 2"<<endl;
                break;		
		default :cout<<"你的成绩不合格" <<endl; 
		 	    
	}
	return 0;
 } 
