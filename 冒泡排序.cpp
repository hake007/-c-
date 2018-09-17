/*冒泡排序算法
Author:zou lf 
Date  :2018.9.17   */

#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp;
	int a[15];
	cout<<"请输入要排序的个数(用空格分开) :"; 
	cin>>n;
	
	 for(i=0;i<n;i++)
	 {
	 	cin>>a[i] ;
	 }
	 cout<<"你输入的数为："<<endl; 
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;	
	for(i=0;i<n-1;i++)      /* 冒泡排序 */ 
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1]) //升序 
			{			
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp; 
			}	
		}				
	}                                    
	cout<<"升序好的数为："; 
	for(j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<endl;
	return 0;
 } 
