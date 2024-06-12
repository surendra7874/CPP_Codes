#include <bits/stdc++.h>

using namespace std;

int singleElement(vector<int> &nums)
{
    int low = 0; 
    int high = nums.size()-1;

    while(low <= high)
    {
        int mid = low + (high-low)/2;
        //We need to check the before and after element of the mid
        // if they are not equal then it the single element.
        // but before that check weather the mid is in limits.

        if(mid > 0 && mid < nums.size()-1)
        {
            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1])
            {
                return nums[mid];
            }
        } 

        /*
         if mid is odd then we are having even number of elements on the left, so check mid and mid-1 element.
         if mid is even then we are having odd number of elements on the left, so check mid and mid+1 element

         if any one condition satiesfy then eliminate left part.
        */
       if((mid%2==0 && mid<nums.size()-1 && nums[mid] == nums[mid+1]) || (mid%2==1 && nums[mid] == nums[mid-1]))
       {
            low = mid+1;
       }
       else{
            high = mid-1;
       }

    }
    return nums[low];
}

int main()
{
    vector<int> arr={1,1,2,3,3,4,4,8,8};
    cout<<singleElement(arr)<<endl;
    return 0;
}