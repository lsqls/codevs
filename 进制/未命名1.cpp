#include <iostream>
using namespace std;
int main()
{
	int num;
	int how;
	cin>>num;
	char final[100];
	int re;
	cin>>re; 
	how=num%re;
	num=num/re;
	int i=0;
	while(num)
	{
		switch(how)
		{   case 0:final[i]='0';break;
			case 1:final[i]='1';break;
			case 2:final[i]='2';break;
			case 3:final[i]='3';break;
			case 4:final[i]='4';break;
			case 5:final[i]='5';break;
			case 6:final[i]='6';break;
			case 7:final[i]='7';break;
			case 8:final[i]='8';break;
			case 9:final[i]='9';break;
			case 10:final[i]='A';break;
			case 11:final[i]='B';break;
			case 12:final[i]='C';break;
			case 13:final[i]='D';break;
			case 14:final[i]='E';break;
			case 15:final[i]='F';break;
		}
		i++;
		how=num%re;
		num=num/re;
	}
	switch(how)
		{   case 0:final[i]='0';break;
			case 1:final[i]='1';break;
			case 2:final[i]='2';break;
			case 3:final[i]='3';break;
			case 4:final[i]='4';break;
			case 5:final[i]='5';break;
			case 6:final[i]='6';break;
			case 7:final[i]='7';break;
			case 8:final[i]='8';break;
			case 9:final[i]='9';break;
			case 10:final[i]='A';break;
			case 11:final[i]='B';break;
			case 12:final[i]='C';break;
			case 13:final[i]='D';break;
			case 14:final[i]='E';break;
			case 15:final[i]='F';break;
		}
		for(int j=i;j>=0;--j)
		cout<<final[j];
		return 0;
 } 
