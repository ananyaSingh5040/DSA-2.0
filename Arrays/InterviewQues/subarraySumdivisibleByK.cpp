#include <bits/stdc++.h>
using namespace std;
int subarraysDivByK(vector<int> &nums, int k)
{
    // BRUTE: O(N^3);

    int result = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + nums[j];
            if (sum % k == 0)
            {
                result++;
            }
        }
    }
    return result;

    // BETTER: O(N + N^2)
    int n = nums.size();
    int count = 0;
    vector<int> prefix(n);
    prefix[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = (i == 0) ? prefix[j] : prefix[j] - prefix[i - 1];
            if (sum % k == 0)
                count++;
        }
    }
    return count;
}
int main()
{
    return 0;
}