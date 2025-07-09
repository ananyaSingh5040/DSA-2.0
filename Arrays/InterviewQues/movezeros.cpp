#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {

        int prev = 0;
        int curr = 1;
        while(curr <= nums.size() - 1) {
            if (nums[prev] == 0 && nums[curr] != 0)
            {
                swap(nums[prev],nums[curr]);
                prev++;
            }
            else if(nums[prev]!=0)
            {
                prev++;
            }
            curr++;
        }
    }
int main()
{
    return 0;
}