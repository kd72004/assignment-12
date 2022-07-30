#include<bits/stdc++.h>
using namespace std;
void number (int );
int main()
{
    number(7);
}
void number (int x)
{
    if(x==0)
    return ;
    number(x-1);
    cout<<x<<endl;
}