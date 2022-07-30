#include<bits/stdc++.h>
using namespace std;
void squre(int );
int main()
{
    squre(10);
}
void squre(int x)
{
    if(x==0)
    return ;
    
    squre(x-1);
    cout<<x*x<<endl;
}