#include <bits/stdc++.h>

using namespace std;

void countingSort(vector<int> &arr)
{
    int length=arr.size();
    // cout<<length<<endl;
    int maxi=INT_MIN;

    // Finding the max element in the given array
    for(int i=0; i<length; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    // Counting the frequency of each element
    vector<int> countArr(maxi+1);
    // cout<<countArr.size()<<endl;

    for(int i=0; i<length; i++)
    {
        countArr[arr[i]]++;
        
    }

    for(int i=0; i<maxi+1; i++)
    {
        cout<<countArr[i]<<" ";
    }
    cout<<endl;
    

    // Add up all the frequencies in the array
    for(int i=1; i<maxi+1; i++)
    {
        countArr[i] += countArr[i-1];
        
    }

    for(int i=0; i<maxi+1; i++)
    {
        cout<<countArr[i]<<" ";
    }
    cout<<endl;

    vector<int> output(length,-1);

    for(int i=length-1; i>=0; i--)
    {
        output[countArr[arr[i]]-1] = arr[i];
        countArr[arr[i]]--;
    }

    for(int i=0; i<length; i++)
    {
        cout<<output[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    vector<int> arr = {1,2,3,1,3,1,4,5,6};
    countingSort(arr);
    return 0;
}