#include <bits/stdc++.h>

using namespace std;

/********* Rotate a matrix by 90 degrees *********************/

void rotateMat(int arr[][5], int col, int row)
{
    int temp[row][col] = {{-1}};

    for(int i=0; i<col; i++)
    {
        int val=row-1;
        for(int j=0; j<row; j++)
        {
            temp[i][j] = arr[val--][i];
        }
    }

    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int arr[][5] = {{4,1,2,5},
                    {5,2,3,6},
                    {6,9,1,7},
                    {4,2,6,9},
                    {7,8,9,2}};
    rotateMat(arr,4,5);
    return 0;
}