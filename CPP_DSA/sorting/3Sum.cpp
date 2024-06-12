#include <bits/stdc++.h>

using namespace std;

/***********************************************************************
 *                    Brute force Approach.
 ***********************************************************************/

vector<vector<int>> triplet(int n, vector<int> &arr) 
{
    set<vector<int>> st;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[i]+arr[j]+arr[k] == 0)
                {
                    vector<int> temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

/***********************************************************************
 *                    Better Approach.
 ***********************************************************************/

vector<vector<int>> tripletBet(int n, vector<int> &arr) 
{
    set<vector<int>> st;

    for(int i=0; i<n; i++)
    {
        set<int> hashSet;
        for(int j=i+1; j<n; j++)
        {
            int thirdEle = -(arr[i]+arr[j]);

            if(hashSet.find(thirdEle) != hashSet.end())
            {
                vector<int> temp ={arr[i],arr[j],thirdEle};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashSet.insert(arr[j]);
        }
    }

    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

/***********************************************************************
 *                    Optimal Approach.
 ***********************************************************************/
vector<vector<int>> tripletOpt(int n, vector<int> &arr) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        //remove duplicates:
        if (i != 0 && arr[i] == arr[i - 1]) continue;

        //moving 2 pointers:
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                //skip the duplicates:
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }
    return ans;
}


int main()
{
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = tripletOpt(n, arr);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}