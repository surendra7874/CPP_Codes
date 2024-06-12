#include <bits/stdc++.h>

using namespace std;

/********* Fill mat with alternate X and 0 *********************/

void modifiedMat(int row, int col)
{
    int srow=0, erow=row-1;
    int scol=0, ecol=col-1;
    char x = 'X';
    
    char arr[row][col];

    

    while(srow <= erow && scol <= ecol)
    {

        //top
        for(int i=scol; i<=ecol; i++)
        {
            arr[srow][i] = x;
            //cout<<arr[srow][i]<<" ";
        }
        //right
        for(int i=srow+1; i<=erow; i++)
        {
            arr[i][ecol] = x;
            //cout<<arr[i][ecol]<<" ";
        }
        //bottom
        for(int i=ecol-1; i>=scol; i--)
        {
            if(srow == erow)
            {
                break;
            }
            arr[erow][i] = x;
            //cout<<arr[erow][i]<<" ";
        }
        //left
        for(int i=erow-1; i>srow; i--)
        {
            if(scol == ecol)
            {
                break;
            }
            arr[i][scol] = x;
            //cout<<arr[i][scol]<<" ";
        }

        x = (x == '0')? 'X': '0';

        scol++, srow++ ;
        ecol--,erow--;
    }

    // cout<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    
}

int main()
{
    int arr[4][4] = {{0,1,2,5},
                     {5,2,0,6},
                     {6,0,1,7},
                     {4,0,6,9}};
    modifiedMat(5,6);
    return 0;
}