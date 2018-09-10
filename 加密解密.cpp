/*功能：此程序用的是替换算法加密，是用户输入一个要加密的字母和 
要替换的密钥长度 
Author:zoulf
Date  :2018.9.9  */
#include<iostream>
using namespace std;
int main()
{
	char c,en;
	int k;
	cout<<"请输入需要加密的字母c=";
	cin>>c;
	cout<<"请输入密钥的长度k=";
	cin>>k;
	en=((c-'a')+k)%26+'a';//输入一个字母从0开始比较，并且加上密钥长度。 
	cout<<"您输入的一个字母加密后为：";
	cout<<en<<endl; 
	return 0;
 } 

