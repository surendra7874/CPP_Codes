#include <bits/stdc++.h>

using namespace std;

void ceilFloor(int arr[], int size, int val)
{
    sort(arr,arr+size);

    if(val < arr[0])
    {
        cout<<"Ceil does not exist"<<endl;
        cout<<"Floor is: "<<arr[0]<<endl;
    }
    else if(val > arr[size-1])
    {
        cout<<"Ceil is: "<<arr[size-1]<<endl;
        cout<<"floor does not exist"<<endl;
    }

    for(int i=0; i<size; i++)
    {
        if(val>=arr[i] && val<=arr[i+1])
        {
            cout<<"Ceil is: "<<arr[i]<<endl;
            cout<<"floor is: "<<arr[i+1]<<endl;
        }
    }
}

int main()
{
    int arr[] = {2,3,80,70,50,20};
    ceilFloor(arr,6,2);
    return 0;
}