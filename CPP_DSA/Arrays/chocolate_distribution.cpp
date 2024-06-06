#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

// Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
// Output: Minimum Difference is 2 
// Explanation:
// We have seven packets of chocolates and
// we need to pick three packets for 3 students 
// If we pick 2, 3 and 4, 
// we get the minimum difference between maximum and minimum packet sizes.

int chocoDistribution(int arr[], int size, int stud)
{
    sort(arr, arr+size);
    int diff = INT_MAX, curDiff = 0;
    int minPack = 0, maxPack = stud - 1;
    for(int i=0; i<size; i++)
    {
        curDiff = arr[maxPack] - arr[minPack];
        diff = min(diff, curDiff);
        
        if(maxPack >= size-1)
        {
            break;
        }
        minPack++;
        maxPack++;
    }
    return diff;
}

int main()
{
    int arr[] = {3, 5, 4, 1, 9};
    int size = 5;
    int students =2;
    
    chocoDistribution(arr, size,students);

    return 0;
}