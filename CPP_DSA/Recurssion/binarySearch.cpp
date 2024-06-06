#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int size, int target, int i)
{
    if(i == size)
    {
        return -1;
    }

    if(arr[i] == target)
    {
        return i;
    }

    return binarySearch(arr, size, target, i+1);
}

int main()
{
    int arr[5] = {7,2,9,4,5};
    cout<<binarySearch(arr,5,1,0);
    return 0;
}