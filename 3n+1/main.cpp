#include<iostream>
using namespace std;
int main()
{   int f(int n);
	int x;
	cin>>x;
	cin.get();
	int arr[x];
	int brr[x];
	for(int j=0;j<x;++j)
		cin>>arr[j];
	for(int j=0;j<x;++j)
        brr[j]=f(arr[j]);
    cout<<brr[0]-1<<'\n';
    for(int j=1;j<x;++j)
    cout<<brr[j]-brr[j-1]-1<<'\n';
return 0;
}
int f(int n)
{
	static int i=0;
	i++;
	if(n==1)
	return i;
	else 
	{
	if(n%2)	
	return f(1+3*n);
	else 
	return f(n/2);
	}
 } 
