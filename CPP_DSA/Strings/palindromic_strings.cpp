#include <bits/stdc++.h>

using namespace std;

/**********************************************************
 *   Brute froce approach
 *   Time complexity - O(N^3)  && space complexity - O(1)
***********************************************************/

bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(s[start] != s[end])
           {
            return false;
           }
           start++;
           end--;
       }
       return true;
}

int countSubstrings(string s)
{
    string subStr;
    int count=0;
    for(int i=0; i<s.size(); i++)
    {
        subStr = "";
        for(int j=i; j<s.size(); j++)
        {
            subStr = subStr+s[j];
            if(isPalindrome(subStr))
            {
                count++;
            }
            cout<<subStr<<" "; 
        }
        cout<<endl;
    }
    return count;
}

/**********************************************************
 *   Optimal approach
 *   Time complexity - O(N^3)  && space complexity - O(1)
***********************************************************/

int main()
{
    string s = "abba";
    cout<<countSubstrings(s);
    return 0;
}