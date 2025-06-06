#include <bits/stdc++.h>
using namespace std;
int getMin(int arr[], int size)
{
    int mini = INT_MAX;
    for(int i =0; i<size;i++)
    {
        if(mini>arr[i])
        {
            mini = arr[i];
        }
    }
    return mini;
}
int getMax(int arr[], int size)
{
    int maxi = INT_MIN;
    for(int i =0; i<size;i++)
    {
        if(maxi<arr[i])
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int main()
{
    int arr[5]={8,21,6,82,90};
    int size = 5;
    cout<<"Min Element: "<<getMin(arr,size)<<endl;
    cout<<"Max Element: "<<getMax(arr,size)<<endl;
    return 0;
}