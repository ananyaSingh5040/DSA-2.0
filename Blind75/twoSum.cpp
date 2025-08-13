#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int> mpp;
        for(int i = 0; i < nums.size(); i++)
        {
            int remaining = target - nums[i];
            if(mpp.find(remaining) != mpp.end())
            {
                return {mpp[remaining], i};
            }
            mpp[nums[i]] = i;
        }
        return {-1,-1};
        
    }
int main()
{
    return 0;
}