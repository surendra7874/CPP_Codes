#include<bits/stdc++.h>

using namespace std;

bool sortedArray(int arr[] , int size, int i)
{
    if(i == size-1)
    {
        return true;
    }
    if(arr[i] > arr[i+1])
    {
        return false;
    }
    
    return sortedArray(arr, size, i+1);

}

int main()
{
    int arr1[5] = {1,2,3,4,5}; //sorted array
    int arr2[5] = {1,2,4,5,3}; //unsorted array

    cout<<" Is true ? "<<sortedArray(arr1,5,0);
    return 0;
}