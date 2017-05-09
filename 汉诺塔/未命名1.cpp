#include <iostream> 
#include <cmath>
using std::cout;
using std::cin;
int main()
{ int han(char begin,char depend,char goal,int mount);
int n;
cin>>n;
cout<<pow(2,n)-1<<'\n';
han('A','B','C',n);
return 0; 
 } 
 int han(char begin,char depend,char goal,int mount)
 {
    // int i=0;
    //i++;
 	 if(mount==1)
 	 cout<<1<<" from "<<begin<<" to "<<goal<<'\n';
 /*	 if(mount==2)
 	 {
 	 	cout<<1<<begin<<"to"<<depend<<'\n';
 	 	cout<<2<<begin<<"to"<<goal<<'\n';
 	 	cout<<1<<depend<<"to"<<goal<<'\n';
     }*/
     else
     {
     	han(begin,goal,depend,mount-1);
     	cout<<mount<<" from "<<begin<<" to "<<goal<<'\n';
     	han(depend,begin,goal,mount-1);
	 }
	 //return i;
 }
