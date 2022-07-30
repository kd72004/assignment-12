#include<bits/stdc++.h>
using namespace std;
void odd_number(int );
int main()
{
    odd_number(10);
}
void odd_number(int x)
{
    if(x==0)
    return ;
    odd_number(x-1);
    cout<<2*x-1<<endl;
}