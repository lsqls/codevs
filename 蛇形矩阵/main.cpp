#include <iostream>
int main() 
{
	using namespace std;
	int n;
	cin>>n;
	n=n-1;
	int arr[n][n];
	for(int i=0;i<=(n/2);++i)
	{
		arr[i][i]=(n+1-i)*(n+1-i);
		for(int j=i+1;j<=n-i;++j)
		arr[i][j+i]=arr[i][j-1]-1;
		for(int j=i+1;j<=n-i;++j)
		arr[j][n+i]=arr[j-1][n-i]-1;
		for(int j=n-i-1;j>=i;--j)
		arr[n-i][j]=arr[n-i][j+1]-1;
		for(int j=n-i+1;j>=i+1;--j)
		arr[j][i]=arr[j-1][i]-1;
	}
	for(int i=0;i<=n;i++)
	{
	for(int j=0;j<=n;j++)
	cout<<arr[i][j]<<" ";
	cout<<endl;
    }
    system("pause");
    return 0;
}

