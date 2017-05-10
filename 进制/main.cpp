#include <iostream>
#include <cmath>
using namespace std;
int main()
{
char num[100];
int tran;
cin>>num;
cin>>tran;
int i=0;
int sum=0;
while(num[i]!='\0') 
i++;
int j=i-1;
i=0;
int a;
while(j>=0)
{
if(int(num[i])>47&&int(num[i])<58) a=int(num[i])-48;
else a=int(num[i])-55;//if(int(num[i])>64&&int(num[i])<71)
sum+=a*pow(tran,j);
j--;
i++;
}
cout<<sum;
return 0;
}
