#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> result;
        int p1 = 0;
        int p2 = 0;
        while(p1 < nums1.size() && p2 < nums2.size())
        {
            if(nums1[p1] < nums2[p2])
            {
                result.push_back(nums1[p1]);
                p1++;
            }
            else
            {
                result.push_back(nums2[p2]);
                p2++;
            }
        }
        while(p1 < nums1.size())
        {
            result.push_back(nums1[p1]);
                p1++;
        }
         while(p2 < nums2.size())
         {
            result.push_back(nums2[p2]);
                p2++;
         }

        int start = 0;
        int end = result.size() - 1;
        float median = 0;
        if(result.size() % 2 == 0)
        {
            int mid = start + (end - start)/2;
            median = (result[mid] + result[mid + 1])/2.0;

        }
        else
        {
            int mid = start + (end - start)/2;
            median = result[mid];
        }
        return median;
    }
int main()
{
    return 0;
}