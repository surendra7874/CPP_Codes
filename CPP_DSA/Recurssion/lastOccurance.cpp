#include<bits/stdc++.h>

using namespace std;

int lastOccurance(vector<int> &arr, int target, int i)
{
    if(i == arr.size())
    {
        return -1;
    }

    int idxFound = lastOccurance(arr, target, i+1);

    if(idxFound == -1 && arr[i] == target)
    {
        return i;
    }
    return idxFound;
}

int main()
{
    vector<int> arr = {1,2,3,3,3,4};
    cout<<lastOccurance(arr,1,0);
    return 0;
}