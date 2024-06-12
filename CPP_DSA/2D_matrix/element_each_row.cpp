#include <bits/stdc++.h>

using namespace std;

bool findElement(vector<vector<int>> &matrix)
{
    int row=matrix.size();
    int col=matrix[0].size();

    for(int i=0; i<col; i++)
    {
        int value=matrix[0][i];
        int count =1;

        for(int j=1; j<row; j++)
        {
            for(int k=0; k<col; k++)
            {
                if(matrix[j][k] == value)
                {
                    count++;
                }
            }
        }

        if(count == row)
        {
            cout<<"Element that present in each row is: "<<value<<endl;
            return true;
        }
    }
    cout<<"There is no single element that present is easch row "<<endl;
    return false;
}

int main()
{
    vector<vector<int>> mat ={{4,2,3,5},
                              {4,6,0,8},
                              {4,7,5,2}};
    cout<<findElement(mat)<<endl;                        
    return 0;
}