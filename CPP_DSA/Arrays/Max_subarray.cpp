// We are implementing the kadane's algorithm for the solution.

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int maxSubArray(int arr[], int size)
{
    int curSum = 0, maxSum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        curSum += arr[i];
        maxSum = max(maxSum , curSum); 
        if(curSum < 0)
        {
            curSum=0;
        }
    }
    return maxSum;
}

int main()
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = 9;
    
    maxSubArray(arr, size);

    return 0;
}
