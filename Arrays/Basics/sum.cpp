#include <bits/stdc++.h>
using namespace std;
int getSum(int arr[],int size)
{
    int sum=0;
    for(int i =0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"Sum is: "<<getSum(arr,5);
    return 0;
}