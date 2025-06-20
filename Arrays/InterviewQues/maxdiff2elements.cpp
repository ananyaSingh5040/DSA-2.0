// Maximum difference between two elements, where the comparison is always on right of the side.
#include <bits/stdc++.h>
using namespace std;
int maxDifference(vector<int> nums)
{
    int suffix = nums[nums.size() - 1];
    int ans = -1;
    for (int i = nums.size() - 1; i > 0; i--)
    {
        ans = max(ans, suffix - nums[i]);
        suffix = max(suffix, nums[i]);
    }
    return ans;
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
    cout<<"Maximum difference b/w two elements is: "<<maxDifference(nums);
    return 0;
}
// Enter n: 8
// Enter elements: 9 5 8 12 2 3 7 4
// Maximum difference b/w two elements is: 7