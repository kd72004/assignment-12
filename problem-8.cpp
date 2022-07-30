#include<bits/stdc++.h>
using namespace std;
int binary_decimal(int);
int reverse (int );
int main()
{
    cout<<binary_decimal(25);

}
int binary_decimal(int x)
{
    int n=0;
    while(x)
    {
        n=n*10+x%2;
        x=x/2;
    }
    n=reverse(n);
    return n;
}
int reverse (int n)
{
    int x=0;
    while(n)
    {
        x=x*10+n%10;
        n/=10;
    }
    return x;
}