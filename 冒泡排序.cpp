/*ð�������㷨
Author:zou lf 
Date  :2018.9.17   */

#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp;
	int a[15];
	cout<<"������Ҫ����ĸ���(�ÿո�ֿ�) :"; 
	cin>>n;
	
	 for(i=0;i<n;i++)
	 {
	 	cin>>a[i] ;
	 }
	 cout<<"���������Ϊ��"<<endl; 
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;	
	for(i=0;i<n-1;i++)      /* ð������ */ 
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1]) //���� 
			{			
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp; 
			}	
		}				
	}                                    
	cout<<"����õ���Ϊ��"; 
	for(j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<endl;
	return 0;
 } 
