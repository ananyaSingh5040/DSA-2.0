// Divide Array in 2 subarrays with equal sum
#include <bits/stdc++.h>
using namespace std;
bool divideArray(vector<int> arr)
{
    int totalSum=0;
    int prefix=0;
    for(int i = 0;i<arr.size();i++)
    {
        totalSum+=arr[i];
    }
    for(int i =0; i<arr.size()-1;i++)
    {
        prefix+=arr[i];
        if(totalSum - prefix == prefix)
        return true;
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(divideArray(arr))
    cout<<"There exists 2 subarrays which has equal sum";
    else
    cout<<"No subarrays with equal sum!";
    return 0;
}