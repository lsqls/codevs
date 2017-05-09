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
	for(int i=1;i<=m;i++)
	{
		arr[m-i][m+i]=1+i*(i+1);
		for(int j=1;j<=i+1;i++)
		{	
		arr[m-i][m+i+j]=arr[m-i][m+i]-j;
		arr[m-i+j][m+i]=arr[m-i][m+i]+j;
	    }
	    arr[m+i][m-i]=1+(i+1)*(i+2);
	    for(int j=1;j<=i+2;i++)
	    {
	    arr[m+i][m-i+j]=arr[m+i][m-i]+j;
		arr[m+i-j][m-i]=arr[m+i][m-i]-j;
		}
	 } 
	
}
else
{
	
}
for(int i=0;i<n;i++)
 	for(int j=0;j<n;j++)
 	     cout<<arr[i][j];
return 0;
} 

