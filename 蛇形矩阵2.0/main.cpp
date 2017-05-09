#include <iostream>
using namespace std;
int main()
{
int n;
int m; 
cin>>n;
int arr[n][n];
if(n%2)
{   m=n/2;
	arr[m][m]=1;
	for(int i=1,a=1;i<=m;i++,a=a+2)
	{
		arr[m-i][m+i]=1+a*(a+1);
		for(int j=1;j<=2*i;j++)
		{	
		arr[m-i][m+i-j]=arr[m-i][m+i]+j;
		arr[m-i+j][m+i]=arr[m-i][m+i]-j;
	    }
	    arr[m+i][m-i]=1+(a+1)*(a+2);
	    for(int j=1;j<=2*i;j++)
	    {
	    arr[m+i][m-i+j]=arr[m+i][m-i]+j;
		arr[m+i-j][m-i]=arr[m+i][m-i]-j;
		}
	 } 	
}
else
{
m=n/2;
arr[m][m-1]=1;
for(int i=1,a=1;i<=m;i++,a=a+2)
	{
		arr[m-i][m-1+i]=1+a*(a+1);
		for(int j=1;j<=2*i;j++)
		{	
		arr[m-i][m-1+i-j]=arr[m-i][m-1+i]+j;
		arr[m-i+j][m-1+i]=arr[m-i][m-1+i]-j;
	    }
	   if(i!=m) 
	   {
	   arr[m+i][m-1-i]=1+(a+1)*(a+2);
	    for(int j=1;j<=2*i;j++)
	    {
	    arr[m+i][m-1-i+j]=arr[m+i][m-1-i]+j;
		arr[m+i-j][m-1-i]=arr[m+i][m-1-i]-j;
		}
	    }
		 
	 } 	

}
for(int i=0;i<n;i++)
{
 	for(int j=0;j<n;j++)
 	     cout<<arr[i][j]<<' ';
 	cout<<'\n';
}
int sum=0;
for(int i=0;i<n;i++)
sum=sum+arr[i][i]+arr[i][n-i-1];
if(n%2)cout<<sum-1;
else cout<<sum;
return 0;
} 

