#include<iostream>
using namespace std;
static int count = 1;
void calNum(int n)
{
    for(int i=1; i<=n/2; i++)
    {
        calNum(i);
        count ++; 
    }
}
int main()
{
    int n;
    cin >> n;
    calNum(n);
    cout << count << endl;
    return 0;
}
