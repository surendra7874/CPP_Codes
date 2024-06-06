#include <bits/stdc++.h>

using namespace std;

int partion(int arr[], int start, int end)
{
    int i=start-1;
    int pivot = arr[end];

    for(int j=start; j<end; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    i++;
    swap(arr[i],arr[end]);

    return i;
}

void qs(int arr[], int start, int end)
{
    if(start >= end)
    {
        return;
    }
    
    int pivot = partion(arr,start,end);

    qs(arr,start,pivot-1);
    qs(arr,pivot+1,end);
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
     qs(arr,0,5);
     display(arr,6);
    return 0;
}