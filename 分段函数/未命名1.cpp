#include<iostream>
using namespace std;
int main()
{int cal(int x);
	int x;
	cin>>x;
	cout<<cal(x);
}
int cal(int x)
{
	if(x>=0)
	return 5;
	else
	return cal(x+1)+cal(x+2)+1;
}
