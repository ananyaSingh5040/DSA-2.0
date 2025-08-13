#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {

        int mini = prices[0];
        int maxProfit = INT_MIN;
        for(int i = 0; i < prices.size(); i++)
        {
            maxProfit = max(maxProfit, prices[i] - mini);
            mini = min(mini, prices[i]);
        }
        return maxProfit;
        
    }
int main()
{
    return 0;
}