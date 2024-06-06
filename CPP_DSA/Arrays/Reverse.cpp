#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

// Normal array : {3, 5, 4, 1, 9}
// Reversed array : {9, 1, 4, 5, 3}

void displayArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i]<<"\t";
    }
    cout<<endl;
}

void reverse(int arr[], int n)
{
    for(int i=0; i<n/2; i++)
    {
        swap(arr[i], arr[n-1-i]);
    }

    cout<<"Array after reversing"<<endl;
    displayArray(arr,n);
}

int main()
{
    int arr[] = {3, 5, 4, 1, 9};
    int size = 5;
    
    reverse(arr, size);

    return 0;
}