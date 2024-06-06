#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int maxprofit(int prices[],int size)
{
    int buy=prices[0];
    int profit = 0;

    for(int i=1; i<size; i++)
    {
        if(prices[i] < buy)
        {
            buy = prices[i];
        }

        if(prices[i] - buy > profit)
        {
            int curProfit = prices[i] - buy;
            profit = max(curProfit, profit);
        }
    }
    return profit;
}

int main()
{
    int arr[] = {4,5,6,7,9,1,2};
    int size = 7;
    
    
    cout<<maxprofit(arr, size)<<endl;

    return 0;
}