#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
void repeatandMissing(vector<int> &arr)
{
    int size = arr.size();
    long long sum = 0, sumSq=0;
    long long sumN = (size * (size+1))/2;
    long long sumSqN = (size * (size+1) * (2*size+1))/6;

    for(int i=0; i<size; i++)
    {
        sum += arr[i];
        sumSq += ((long long)arr[i] * (long long)arr[i]);
    }

    long long val1 = sum - sumN;
    long long val2 = sumSq - sumSqN;
    val2 = val2 / val1;
    
    long long repeating = (val1 + val2)/2;
    long long missing = repeating - val1;

    cout <<"Repeating number is "<<(int)repeating<<endl<<"Missing number is "<<(int)missing<<" "<<endl;
    return;
}


int main()
{
    vector<int> arr = {3, 5, 4, 1, 3};

    repeatandMissing(arr);

    return 0;
}