#include <bits/stdc++.h>

using namespace std;

/*
    time complexity --> O(N)
    space complexity --> O(k)
*/

void countingDuplicates(string s)
{
    unordered_map<char,int> count;
    for(int i=0; i<s.size(); i++)
    {
        count[s[i]]++;
    }

    for(auto x : count)
    {
        if(x.second > 1)
        {
            cout<<x.first<<", count: "<<x.second<<endl;
        }
    }
}

int main()
{
    string str = "peddapolu venkata surendra";
    countingDuplicates(str);
    return 0;
}