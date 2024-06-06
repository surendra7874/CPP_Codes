#include <bits/stdc++.h>

using namespace std;

string longestPrefix(vector<string> &v)
{
    string str = "";
    sort(v.begin() , v.end());
    int n = v.size();
    string first = v[0] , last = v[n-1];
    int i;
    for(i=0; i < min(first.size() , last.size()); i++);
    {
        if(first[i] != last[i])
        {
            
            return str;
        }
        
        str += first[i];
    }
    return str;
}

int main()
{
    vector<string> str = {{"flower"} , {"flow"} , {"flask"}};
    cout<<longestPrefix(str);
    return 0;
}