#include <bits/stdc++.h>

using namespace std;

void allOccurance(int arr[], int size, int target, int i)
{
    if(i == size)
    {
        return;
    }

    if(arr[i] == target)
    {
        cout<<i<<" ";
    }

    return allOccurance(arr, size, target, i+1);
}

int main()
{
    int arr[8] = {7,2,9,4,5,7,2,7};
    allOccurance(arr,8,7,0);
    return 0;
}