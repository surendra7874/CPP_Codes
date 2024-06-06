#include <bits/stdc++.h>

using namespace std;

int countSubstrings(string str, int i, int j, int n)
{
    if(n == 1)
    {
        return 0;
    }

    if(n <= 0)
    {
        return 0;
    }

    int res = countSubstrings(str,i+1,j,n-1) + 
              countSubstrings(str, i, j-1,n-1) -
              countSubstrings(str,i+1,j-1,n-2);

    if(str[i] == str[j])
    {
        res++;
    }          
    return res;        
}

int main()
{
    string s = "abcab";
    int n = s.size();
    cout<<countSubstrings(s,0,n-1,n);
    return 0;
}