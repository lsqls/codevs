#include <iostream>
int main()
{
	using std::cout;
	using std::cin;
	int i=1;
	int k1,k2,n;
	cin>>n;
	int sum=0;
	while(sum<n)
	{
		sum+=i;
		i++;
	}
	k1=i-sum+n;
	k2=1+sum-n;
	if(i%2) 
	cout<<k2<<'/'<<k1;
	else
	cout<<k1<<'/'<<k2;
	return 0;
 } 
