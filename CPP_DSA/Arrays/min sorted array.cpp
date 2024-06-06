// Input: nums = [3,4,5,1,2]
// Output: 1
// Explanation: The original array was [1,2,3,4,5] rotated 3 times.

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int findMin(vector<int>& nums)
{
    int size=nums.size();
    int low=0, high=size-1;
    int minValue = INT_MAX;

    while(low <= high)
    {
        int mid = (low + high)/2;

        if(nums[low] <= nums[high])
        {
            minValue = min(minValue, nums[low]);
            break;
        }

        if(nums[low] <= nums[mid])
        {
            minValue = min(minValue, nums[low]);
            low = mid + 1;
        }
        else{
            minValue = min(minValue, nums[mid]);
            high = mid - 1;
        }
    }
    return minValue;
}


int main()
{
    vector<int> arr = {3,4,5,1,2};

    cout<<findMin(arr)<<endl;
    return 0;
}