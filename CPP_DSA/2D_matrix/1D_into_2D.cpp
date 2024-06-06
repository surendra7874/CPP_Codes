#include <bits/stdc++.h>

using namespace std;

void oneDinto2D(int arr[], int n, int m)
{
    int mat[n][m] = {{0}};
    int index=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(index < m+n)
            {
                mat[i][j] = arr[index];
                index++;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    //int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int arr[] = {1,2,3,4};
    oneDinto2D(arr,2,2);
    return 0;
}