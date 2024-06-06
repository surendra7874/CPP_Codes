#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

//    {3, 5, 4, 1, 9}
//  min value is 1 and max value is 9. 

void max_and_min(int arr[], int n)
{
    int min = INT_MAX, max =INT_MIN;
    
    if(n < 2)
    {
        cout<< "We can not find the min and max values";
        return;
    }
    
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "min value is "<<min<<endl;
    cout << "max value is "<<max<<endl;
}

int main()
{
    int arr[] = {3};
    int size = 1;
    
    max_and_min(arr, size);

    return 0;
}