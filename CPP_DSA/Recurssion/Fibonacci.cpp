#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n * fibonacci(n-1);
}

int main()
{
    int n=4;
    cout<<"Fibonaci of number "<<n<<" is: "<<fibonacci(n)<<endl;
    return 0;
}