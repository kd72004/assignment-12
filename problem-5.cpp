#include<bits/stdc++.h>
using namespace std;
void even_number(int );
int main()
{
    even_number(10);
}
void even_number(int x)
{
    if(x==0)
    return ;
    even_number(x-1);
    cout<<x*2<<endl;
}