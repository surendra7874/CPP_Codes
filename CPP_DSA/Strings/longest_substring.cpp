#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<end){
           if(s[start] != s[end])
           {
            return false;
           }
           start++;
           end--;
       }
       return true;
}

string longestPalindrome(string s)
{
    string str, temp;
    int maxi=0;
    int length = 0;
    for(int i=0; i<s.size(); i++)
    {
        str = "";
        for(int j=i; j<s.size(); j++)
        {
            str = str + s[j];
            // cout<<str<<" ";
            if(isPalindrome(str))
            {
                length = str.size();
                if(length > maxi)
                {
                    temp = "";
                    temp = temp + str;
                }
                maxi = max(maxi,length);
            }
        }
    }  
    return temp;
}

int main()
{
    string s = "babad";
    cout<<longestPalindrome(s);
    return 0;
}