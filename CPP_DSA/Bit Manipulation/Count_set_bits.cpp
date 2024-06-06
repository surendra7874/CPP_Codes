#include <bits/stdc++.h>

using namespace std;

int countSetBits(int number)
{
    int i=0, count=0;
    while(number > 0)
    {
        int temp = number << i;
        count += (temp & 1);
        i++;
    }
    return count;
}

int main()
{
    int N = 5;
    cout<<countSetBits(N);
    return 0;
}