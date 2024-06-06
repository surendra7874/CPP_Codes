#include <bits/stdc++.h>

using namespace std;

// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.

int maxProductSubArray(vector<int> &nums)
{

    int pre =1, suff=1;
    int ans = INT_MIN;
    int size = nums.size();

    for(int i=0; i<size; i++)
    {
        if( pre == 0) pre =1;
        if( suff == 0) suff =1;

        pre = pre * nums[i];
        suff = suff * nums[size-1-i];
        ans = max(ans , max(pre,suff));
    }
    return ans;
}

int main()
{

}