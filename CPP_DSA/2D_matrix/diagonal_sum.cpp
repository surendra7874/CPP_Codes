#include <bits/stdc++.h>

using namespace std;

/*********** time complexity - O(n^2) *****************/

int diaSum(int matrix[][4], int n)
{
    int sum=0;

    for(int i=0;i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
            {
                sum += matrix[i][j];
            }
            else if(j == n-i-1)
            {
                sum += matrix[i][j];
            }
        }
    }
    cout<<sum<<endl;
}

int diaSumOpt(int matrix[][4], int n)
{
    int sum =0;

    for(int i=0; i<n; i++)
    {
        sum += matrix[i][i];  //primary diagonal
        if(i != n-i-1)
        {
            sum += matrix[i][n-i-1];  //secondary diagonal
        }
    }
    return sum;
}

int main()
{
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<diaSumOpt(matrix,4);
    cout<<endl;
    diaSum(matrix,4);
    return 0;
}