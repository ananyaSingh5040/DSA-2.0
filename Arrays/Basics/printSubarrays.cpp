// Print Subarrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n =4;
    int arr[4]={4,3,7,2};
    for(int i =0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            for(int k = i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}