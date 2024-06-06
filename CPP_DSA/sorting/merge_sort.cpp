#include <bits/stdc++.h>

using namespace std;

void merge(int arr[],int start, int mid, int end)
{
    vector<int> temp;
    int i=start , j=mid+1;

    while(i<=mid && j<= end)
    {
        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    //remaining elements in left half
    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    //remaining elements in right half
    while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int i=start; i<=end; i++)
    {
        arr[i] = temp[i-start];
    }
}

void ms(int arr[], int start, int end)
{
    if(start >= end)
    {
        return;
    }
    int mid = (start+end)/2;

    ms(arr,start, mid); //left half
    ms(arr,mid+1,end);  //right half

    merge(arr,start,mid,end);
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = { 6,3,7,5,2,4};
     ms(arr,0,5);
     display(arr,6);
    return 0;
}