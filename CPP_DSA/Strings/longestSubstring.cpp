#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_set<char> charSet;
    int length = s.size();
    int start=0;
    int maxi=0;

    for(int end=0; end<length; end++)
    {
        if(!charSet.count(s[end]))
        {
            charSet.insert(s[end]);
            maxi = max(maxi,(end-start+1));
        }
        else{
            while(charSet.count(s[end]))
            {
                charSet.erase(s[start]);
                start++;
            }
            charSet.insert(s[end]);
        }
    }
    return maxi;
}

int main()
{
    string str="abcdbcbb";
    cout<<lengthOfLongestSubstring(str)<<endl;
    
    return 0;
}