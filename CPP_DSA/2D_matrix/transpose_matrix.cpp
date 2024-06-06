#include <bits/stdc++.h>

using namespace std;

void transposeMat(int mat[][4], int n, int m)
{
    int transpose[m][n] = {{0}};
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    transposeMat(matrix,3,4);
    return 0;
}