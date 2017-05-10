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
while(j>=0)
{
if(47<num[i]<57) sum=sum+(int(num[i])-48)*pow(tran,j);
if(64<num[i]<71)sum=sum+(int(num[i])-55)*pow(tran,j);
j--;
i++;
}
cout<<sum;
return 0;
}
