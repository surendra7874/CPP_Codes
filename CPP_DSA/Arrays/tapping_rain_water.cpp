#include <bits/stdc++.h>
using namespace std;

int waterTrap(vector<int> &nums)
{
    int n = nums.size();
    vector<int> leftMax(n,0);
    vector<int> rightMax(n,0);
    
    leftMax[0] = nums[0];
    rightMax[n-1] = nums[n-1];
    for(int i=1; i<n; i++)
    {
        leftMax[i] = max(leftMax[i-1],nums[i-1]); 
    }

    for(int i=n-2; i>=0; i++)
    {
        rightMax[i] = max(rightMax[i+1],nums[i+1]);
    }

    int waterTrapped = 0;
    for(int i=0; i<n; i++)
    {
        int curWater = min(leftMax[i],rightMax[i]) - nums[i];
        if(curWater > 0)
        {
           waterTrapped += curWater;
        }
    }
    return waterTrapped;
}

int main()
{
    return 0;
}