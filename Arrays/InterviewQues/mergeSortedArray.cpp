#include <bits/stdc++.h>
using namespace std;
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = m + n;
        vector<int> arr;
        int f = 0;
        int s = 0;
        // int c
        while (f < m && s < n) {
            if (nums1[f] < nums2[s]) {
                arr.push_back(nums1[f]);
                f++;
            } else {
                arr.push_back(nums2[s]);
                s++;
            }
        }
        while (f < m) {
            arr.push_back(nums1[f]);
            f++;
        }
        while (s < n) {
            arr.push_back(nums2[s]);
            s++;
        }
        for(int i =0 ; i<size;i++)
        {
            cout<<arr[i];
        }
    }
int main()
{
    vector<int> nums1 = {1,5,6};
    vector<int> nums2 = {2,3,4};
    merge(nums1,3,nums2,3);
    return 0;
}