#include<bits/stdc++.h>
using namespace std;
void number_rev (int);
int main()
{
    number_rev(7);
}
void number_rev(int x)
{
    if(x==0)
    return ;
    cout<<x<<endl;
    number_rev(x-1);
}