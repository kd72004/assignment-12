#include<bits/stdc++.h>
using namespace std;
int n=0;
int reverse_number(int);
int main()
{
    cout<<reverse_number(123)<<endl;
}
int reverse_number(int x)
{
    
    if(x)
    {
        n=n*10+x%10;
        x=x/10;
        return reverse_number(x);
    }
    else 
    return n;
}