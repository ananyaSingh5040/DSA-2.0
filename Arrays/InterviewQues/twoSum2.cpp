#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> result;
        int start = 0;
        int end = numbers.size() - 1;
        while(start<end)
        {
            int sum = numbers[start] + numbers[end];
            if(sum > target)
            {
                end--;
            }
            else if(sum< target)
            {
                start++;
            }
            else
            {
                result.push_back(start + 1);
                result.push_back(end + 1);
                return result;
            }
        }
        return {-1,-1};

    }
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements: ";
    for(int i = 0;i<n;i++)
    {
        cin>>nums[i];
    }
    
    return 0;
}