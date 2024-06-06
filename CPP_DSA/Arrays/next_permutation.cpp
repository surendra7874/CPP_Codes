#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

vector<int> nextPermutation(vector<int> &arr)
{
    int size = arr.size();
    int position = -1;
    for(int i=size-2; i>=0; i--)
    {
        if(arr[i] < arr[i+1])
        {
            position = i;
            break;
        }
    }

    if(position == -1)
    {
        reverse(arr.begin(),arr.end());
        return arr;
    }

    for(int i=size-1; i>position; i--)
    {
        if(arr[position] < arr[i])
        {
            swap(arr[position], arr[i]);
            break;
        }
    }

    reverse(arr.begin() + position+1, arr.end());
    return arr;
}

void displayArray(vector<int> &arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i]<<"\t";
    }
    cout<<endl;
}

vector<int> nextPermutation(int N, vector<int> &arr){
        // code here
        int pivot=-1;
        
        for(int i=N-2; i>=0; i--)
        {
            if(arr[i] < arr[i+1])
            {
                pivot = i;
                break;
            }
        }
        
        if(pivot == -1)
        {
            reverse(arr.begin(),arr.end());
            return arr;
        }
        
        for(int i=N-1; i>pivot; i--)
        {
            if(arr[pivot] < arr[i])
            {
                swap(arr[i],arr[pivot]);
                displayArray(arr);
                break;
            }
        }
        
        reverse(arr.begin()+pivot+1, arr.end());
        displayArray(arr);
        return arr;
    }

int main()
{
    vector<int> temp = {1, 2, 3, 6, 5, 4};
    
    nextPermutation(6,temp);
    
    displayArray(temp);

    return 0;
}