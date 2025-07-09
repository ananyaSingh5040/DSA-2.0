#include <bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        vector<int> result(n);
        int left = 0;
        int right = n - 1;
        int position = n -1;
        
        while(left <= right)
        {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if(leftSquare > rightSquare)
            {
                result[position--] = leftSquare;
                left++;
            }
            else
            {
                result[position--] = rightSquare;
                right--;
            }
            
        }
        return result;
    }
int main()
{
    return 0;
}