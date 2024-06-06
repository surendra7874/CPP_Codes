// Input: arr[] = {11, 15, 6, 8, 9, 10}, X = 16
// Output: true
// Explanation: There is a pair (6, 10) with sum 16

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

bool SsortedRotatedSum(vector<int> &nums, int k)
{
    int size = nums.size();
    int pivot = -1;

    for(int i=0; i<size-1; i++)
    {
        if(nums[i] < nums[i+1])
        {
            pivot = i;
        }
    }

    int left = pivot + 1;
    int right = pivot;

    while(left != right)
    {
        if(nums[left] + nums[right] == k)
       {
        return true;
       }

       if(nums[left] + nums[right] < k)
       {
        left = (left + 1)%size;
       }
       else{
        right = (right + size -1)
       }
    }
}

int main()
{
    vector<int> arr = {11, 15, 6, 8, 9, 10};
    int sum = 16;

    if(SsortedRotatedSum)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}