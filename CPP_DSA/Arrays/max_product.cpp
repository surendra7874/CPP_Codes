#include <bits/stdc++.h>

using namespace std;

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

vector<int> productExceptSelf(vector<int>& nums)
{
    int size = nums.size();
    vector<int> left(size,1);
    vector<int> right(size,1);

    // Calculate the left product for every i th element
    for(int i=1; i<size; i++)
    {
        left[i] = nums[i-1] * left[i-1];
    }
    // Calculate the right product for every i th element
    for(int i=size-2; i>=0; i--)
    {
        right[i] = right[i+1] * nums[i+1];
    }

    //Now calculate the product of every elemnt except itself
    for(int i=0; i<size; i++)
    {
        nums[i] = left[i] * right[i];
    }

    return nums;

}

int main()
{
    int arr[] = {1,2,3,4,5,0};
    
    return 0;
}