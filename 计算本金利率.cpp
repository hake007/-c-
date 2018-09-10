//计算本金利率
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double money,years,rate,sum;
	cout<<"请输入本金，存的年数，年利率，用空格分开"<<endl;
	cin>>money >>years >>rate;
	while(money>0)
	{
		sum=money*pow((1+rate),years);
		
		cout<<"总共获得本金加利率:"<<sum<<endl;
		cout<<"请输入本金，存的年数，年利率，用空格分开"<<endl;
		 cin>>money >>years >>rate;
	 } 	
	return 0;
 } 
