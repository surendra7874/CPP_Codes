#include <bits/stdc++.h>

using namespace std;

bool isanagram(string s, string t)
{
    if(s.size() != t.size())
    {
        return false;
    }

    int length = s.size();
    sort(s.begin() , s.end());
    sort(t.begin() , t.end());

    for(int i=0; i<length; i++)
    {
        if(s[i] != t[i])
        {
            return false;
        }
    }

    return true;
}

bool isanagramHash(string s, string t)
{
    unordered_map<char,int> count;
    

    for(auto x : s)
    {
        count[x]++;
    }

    for(auto x : t)
    {
        count[x]--;
    }

    for(auto x : count)
    {
        if(x.second != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1= "suri";
    string s2= "uris";

    cout<<isanagram(s1,s2);
    return 0;
}