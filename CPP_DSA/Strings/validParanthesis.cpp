#include <bits/stdc++.h>

using namespace std;

bool isValid(string str)
{
    stack<char> temp;

    for(auto c : str)
    {
        if(c == '(' || c == '{' || c == '[')
        {
            temp.push(c);
        }
        else{
            if(temp.empty())
            {
                return false;
            }

            int top = temp.top();
            if(c == ')' && top == '(' || c == '}' && top == '{' || c == ']' && top == '[')
            {
                temp.pop();
            }
            else{
                return false;
            }
        }
    }
    return temp.empty();
}

int main()
{
    string str = "{[()]}";
    cout<<isValid(str);
    return 0;
}