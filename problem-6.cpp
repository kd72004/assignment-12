#include<bits/stdc++.h>
using namespace std;
void even_reverse(int );
int main()
{
    even_reverse(10);
}
void even_reverse(int x)
{
    if(x==0)
    return ;
    cout<<x*2<<endl;
    even_reverse(x-1);
}