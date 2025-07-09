#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char>& s) {

        int n = s.size();
        int left = 0;
        int right = n - 1;
        while(left <= right)
        {
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
int main()
{
    return 0;
}