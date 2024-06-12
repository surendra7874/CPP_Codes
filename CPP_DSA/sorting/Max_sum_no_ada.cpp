#include <bits/stdc++.h>

using namespace std;

int findMaxSum(vector<int> &arr, int size)
{
    int maxi=INT_MIN;
    int sum=0;

    for(int i=0; i<size; i++)
    {
        sum = arr[i];
        for(int j=i+2; j<size; j += 2)
        {
            sum += arr[j];
            maxi = max(maxi,sum);
        }
        sum =0;
    }
    return maxi;
}


int main()
{
    // Creating the array
    vector<int> arr = { 5, 5, 10, 50, 10, 5 };
    int N = arr.size();
 
    // Function call
    cout << findMaxSum(arr, N) << endl;
    return 0;
}
