#include <bits/stdc++.h>

using namespace std; 

/****************** Brute Force apporach  **************************
 *   time complexity - O(n^2)
 *   space complexity - O(1)
********************************************************************/

void diffPair(int arr[], int value,int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i != j && (arr[i]-arr[j] == value || arr[j]-arr[i] == value))
            {
                cout<<"Elements are: "<<arr[i]<<" and "<<arr[j]<<endl;
                return;
            }
        }
    }
    cout<<"No such pair"<<endl;
}

/****************** Optimal apporach  ******************************
 *   time complexity - O(n*log n)
 *   space complexity - O(1)
********************************************************************/

void diffPairOpt(int arr[], int value,int size)
{
    sort(arr,arr+size);

    int i=0, j=1;

    while(i<size && j<size)
    {
        if(i != j && arr[j]-arr[i] == value)
        {
            cout<<"Pair is: "<<arr[i]<<" and "<<arr[j]<<endl;
            return;
        }
        else if(arr[j]-arr[i] < value)
        {
            j++;
        }
        else{
            i++;
        }
    }
    cout<<"No such pair"<<endl;
}

int main()
{
    int arr[] = {2,3,80,70,50,20};
    diffPairOpt(arr,17,6);
    return 0;
}