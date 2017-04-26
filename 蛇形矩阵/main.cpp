#include <iostream>
int main() {
	using namespace std;
void draw_ji(int);
void draw_ou(int);
int k;
cin>>k;
int arr[k+1][k+1];
	if(k%2)
	draw_ji(k,arr);
	else
	draw_ou(k,arr);
	for(int i=1;i<=k;i++)
	{
	for(int j=1;j<=k;j++)
	cout<<arr[i][j]<<" ";
	cout<<'\n';
    }
	return 0;
}
void draw_ji(int n,int arr[][])
{   void draw_ou(int);
	draw_ou(n-1);
	arr[1][1]=(n-1)^2+1;
	for(j=2;j<=n;j++)
	arr[j][1]=arr[1][j-1]+1;
	for(i=2;i<=n;i++)
	arr[n][i]=arr[n][i-1]+1;
}
void draw_ou(int n,int arr[][])
{   void draw_ji(int);
	draw_ji(n-1);
	arr[n][n]=(n-1)^2+1;
	for(j=n-1;j>=1;j--)
	arr[j][n]=arr[j+1][n]+1;
	for(i=n-1;i>=1;i--)
	arr[1][i]=arr[1][i-1]+1;
 } 

