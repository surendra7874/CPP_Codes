#include <bits/stdc++.h>

using namespace std;

/***********************************************************************
*                    Brute force Approach.
  Here we are using the extra space but in the question it ius mentioned that we should not use the extra space.
***********************************************************************/

void merge(long long arr1[], long long arr2[], int n, int m)
{
    long long int temp[n+m];
    int left=0, right=0;
    int index=0;

    while(left < n && right < m)
    {
        if(arr1[left]<=arr2[right])
        {
            temp[index++] = arr1[left];
            left++;
        }
        else{
            temp[index++] = arr2[right];
            right++;
        }
    }

    while(left < n)
    {
        temp[index++] = arr1[left];
        left++;
    }

    while(right < m)
    {
        temp[index++] = arr2[right];
        right++;
    }

    int index2=0, index1=0;
    for(int i=0; i<n+m; i++)
    {
        if(i<n)
        {
            arr1[index1++] = temp[i];
        }
        else{
            arr2[index2++] = temp[i];
        }
    }
}

/***********************************************************************
 *                    Optimal Approach 1.
 ***********************************************************************/

void mergeOpt1(long long arr1[], long long arr2[], int n, int m)
{
    int left=n-1, right=0;

    while(left >=0 && right <m)
    {
        if(arr1[left] > arr2[right])
        {
            swap(arr1[left],arr2[right]);
            left--,right++;
        }
        else 
        {
            break;
        }
    }

    // Sorting the individual arrays
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
}



int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    mergeOpt1(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}