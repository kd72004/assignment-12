#include<bits/stdc++.h>
using namespace std;
void odd_reverse(int );
int main()
{
    odd_reverse(10);
}
void odd_reverse(int x)
{
    if(x==0)
    return ;
    cout<<2*x-1<<endl;
    odd_reverse(x-1);
}