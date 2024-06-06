#include <bits/stdc++.h>

using namespace std;

/********* time complexity - O(n * m)   *****************/

void searchKey(int mat[][4], int n, int m, int key)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(mat[i][j] == key)
            {
                cout<<i<<" , "<<j<<endl;
            }
        }
    }
}

/************************************************************ 
                Stair case approach
                time complexity - O(n * m)  
*************************************************************/

bool searchKeyOpt(int mat[][4], int n, int m, int key)
{
    int i=0,j=m-1;

    while(i<n && j>= 0)
    {
        if(mat[i][j] == key)
        {
            return true;
        }
        else if(mat[i][j] > key)
        {
            //move left
            j--;
        }
        else{
            //move down
            i++;
        }
    }
    return false;
}


int main()
{
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
   // spiralMatrix(matrix,4,4);
   cout<<searchKeyOpt(matrix,4,4,55);
    return 0;
}