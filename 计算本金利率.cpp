//���㱾������
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double money,years,rate,sum;
	cout<<"�����뱾�𣬴�������������ʣ��ÿո�ֿ�"<<endl;
	cin>>money >>years >>rate;
	while(money>0)
	{
		sum=money*pow((1+rate),years);
		
		cout<<"�ܹ���ñ��������:"<<sum<<endl;
		cout<<"�����뱾�𣬴�������������ʣ��ÿո�ֿ�"<<endl;
		 cin>>money >>years >>rate;
	 } 	
	return 0;
 } 
