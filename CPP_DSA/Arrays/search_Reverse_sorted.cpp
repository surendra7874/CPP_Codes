#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

void reverse_sorted(int arr[], int size, int target)
{
    int low=0, high=size-1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == target)
        {
            cout<<mid<<endl;
            return;
        }

        if(arr[low] <= arr[mid])
        {
            if(arr[low] <= target && target <= arr[mid])
            {
                high = mid -1;
            }
            else{
                low = mid +1;
            }
        }
        else{
            if(arr[mid] <= target && target <= arr[high])
            {
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    cout<<"-1"<<endl;
}

int main()
{
    int arr[] = {4,5,6,7,0,1,2};
    int size = 7;
    int target =0;
    
    reverse_sorted(arr, size,target);

    return 0;
}