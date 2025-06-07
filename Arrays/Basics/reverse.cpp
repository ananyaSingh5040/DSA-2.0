#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int size)
{
    int start =0;
    int end = size-1;
    while(start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    reverseArray(arr,5);
    cout<<"Reversed Array: ";
    for(int i =0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}