#include <bits/stdc++.h>

using namespace std;

/************************* Brute froce approach *************************
 *                time complexity - O((N*M)*(N + M)) + O(N*M)
 *                space complexity - O(1)
 *************************************************************************/

void setRow(vector<vector<int>> &matrix, int col, int i, int j)
{
    for(int k=0; k<col; k++)
    {
        if(matrix[i][k] != 0)
        {
            matrix[i][k] = -1;
        }
    }
}

void setCol(vector<vector<int>> &matrix, int row, int i, int j)
{
    for(int k=0; k<row; k++)
    {
        if(matrix[k][j] != 0)
        {
            matrix[k][j] = -1;
        }
    }
}

void setZeros(vector<vector<int>> &matrix, int row, int col)
{

    // Mark the elements in the rows and col to -1 except 0.
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(matrix[i][j] == 0)
            {
                setRow(matrix,col,i,j);
                setCol(matrix,row,i,j);
            }
        }
    }


    // Now again mark all the elements 0 in place of -1
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(matrix[i][j] == -1)
            {
               matrix[i][j] = 0; 
            }
        }
    }

    // display the elements
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    } 
}


/************************* Better froce approach *************************
 *                time complexity - O(2*N*M)
 *                space complexity - O(row)+O(col)
 *************************************************************************/

void setZerosBet(vector<vector<int>> &matrix, int row, int col)
{
    int Row[row]={0};
    int Col[col]={0};

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(matrix[i][j] == 0)
            {
                Row[i] = 1;
                Col[j] = 1;
            }
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(Row[i]==1 || Col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }    

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() 
{
    vector<vector<int>> mat ={{1,2,3,4},
                              {5,6,0,8},
                              {9,7,1,2}};

    setZerosBet(mat,3,4);        
    return 0;          
}