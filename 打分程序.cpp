#include<iostream>
using namespace std;
#define N  20
void Input(int x[],int n);
void bubble_sore(int x[],int n);
int Find_Max(int x[],int n);
float Find_min(int z[],int n);
int total_value(int x[],int n);
//float Last_score(int x[],int n);
int main()
{	
	int sore[N],i,j,max_value,min_value,final_score;
	int sum_value;
	cout<<"������ʮλ��ί������(�ո�ָ�)��"<<endl;
	Input(sore,10);		
	cout<<"------------------------------"<<endl;
	cout<<"������ķ���Ϊ(����)��"<<endl; 
	 bubble_sore(sore,10); 
	cout<<endl;
	cout<<"--------------------------------"<<endl;
 	max_value=Find_Max(sore,10);
	cout<<"���������ֵΪ:"<<max_value<<endl;
	cout<<"----------------------------------"<<endl;
	min_value=Find_min(sore,10);
	cout<<"��������СֵΪ��"<<min_value<<endl; 
	sum_value=total_value(sore,10);	
	cout<<"�ܷ���Ϊ��" ;
	cout<<sum_value<<endl; 
	final_score=(sum_value-(max_value+min_value));
	cout<<"��ѡ�ֵ����յ÷�Ϊ��ȥ����߷ֺ���ͷ֣���"<<endl;
	cout<<final_score<<endl;
	return 0;
 } 
 void Input(int x[],int n)
 {
 	int i;
 	for(i=0;i<n;i++)
 	{
 		cin>>x[i];
	 }
 }
 int Find_Max(int x[],int n)
 {
 	int max=x[0];
 	int i;
 	for(i=0;i<n;i++)
 	{
 		if(x[i]>max)
 		
 		{
 			max=x[i];
		 }
	 }
  return max; 	
 }
 int total_value(int x[],int n)
 {
 	int sun=0;
 	int j;
 	for(j=0;j<n;j++)
 	{
 		sun=sun+x[j];	
	}
 return sun;	 
 }
 void bubble_sore(int x[],int n)
 {
 	int i,j,temp,k;
 	for(i=0;i<n-1;i++)
 	{
 		for(j=0;j<n-1-i;j++)
 		{
 			if(x[j]>x[j+1])
 			{
 			temp=x[j];
			x[j]=x[j+1];
			x[j+1]=temp; 
			 }
		 }
	 }
	cout<<endl; 
 	for(k=0;k<n;k++)
	{
		cout<<x[k]<<" ";
	}		
 }
 float Find_min(int z[],int n)
 {
 	int i,min;
 	min=z[0];
 	for(i=0;i<n;i++)
 	{
 		if(z[i]<min)
 		{
 			min=z[i];
		 }
	 }
 	return min;
 }
 
 
 
 
 
 
