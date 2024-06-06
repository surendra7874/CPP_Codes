

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

// arr[] = {1,2,3,1}
// we need to return true if the arr contains element more than once  else false.

bool containDup(int arr[], int size)
{
    sort(arr,arr+size);

    for(int i=0; i<size-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {3, 5, 4, 1, 3};
    int size = 5;
    
    int output = containDup(arr, size);

    cout<<output<<endl;

    return 0;
}