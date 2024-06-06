#include <bits/stdc++.h>

using namespace std;

bool isValid(int i, int j, int row, int col)
{
    if(i<0 || j<0 || i>=row || j>=col)
    {
        return false;
    }
    return true;
}

void diaMat(int arr[][5], int row, int col)
{
    int maxi=max(row,col);
    for(int line=0; line<maxi; line++)
    {
        cout<<arr[line][0]<<" ";

        int i=line-1;
        int j=1;

        while(isValid(i,j,row,col))
        {
            cout<<arr[i--][j++]<<" ";
        }

        cout<<endl;
    }

    int mini=min(row,col);
    for(int line=1; line<mini; line++)
    {
        cout<<arr[maxi][line]<<" ";

        int val=row-1;
        int j=line+1;
        while(isValid(val,j,row,col))
        {
            cout<<arr[val][j++]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int arr[][5] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    diaMat(arr,4,5);
    return 0;
}