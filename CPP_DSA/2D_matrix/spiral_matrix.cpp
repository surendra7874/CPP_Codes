#include <bits/stdc++.h>

using namespace std;

void spiralMatrix(int matrix[][4], int n, int m)
{
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;
    
    while(srow <= erow && scol <= ecol)
    {
        //top
        for(int i=scol; i<=ecol; i++)
        {
             cout<<matrix[srow][i]<<" ";
        }
    //right
    for(int i=srow+1; i<=erow; i++)
    {
        cout<<matrix[i][ecol]<<" ";
        
    }
    //bottom
    for(int i=ecol-1; i>=scol; i--)
    {
        if(srow == erow)
        {
            break;
        }
        cout<<matrix[erow][i]<<" ";
    }
    //left
    for(int i=erow-1; i>srow; i--)
    {
        if(scol == ecol)
        {
            break;
        }
        cout<<matrix[i][scol]<<" ";
    }

    srow++,scol++;
    ecol--,erow--;
    }  
}

int main()
{
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralMatrix(matrix,4,4);
    return 0;
}