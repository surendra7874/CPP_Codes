#include<bits/stdc++.h>

using namespace std;

int pow(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }

    int halfpower = pow(x,n/2);
    int halfPowerSq = halfpower * halfpower;

    if(n%2 != 0)
    {
        return x * halfPowerSq;
    }
    return halfPowerSq;
}

int main()
{
    cout<<pow(3,3)<<endl;
    return 0;
}