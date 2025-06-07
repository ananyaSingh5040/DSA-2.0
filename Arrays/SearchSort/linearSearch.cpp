#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int size, int key)
{
    for(int i =0;i<size;i++)
    {
        if(arr[i]==key)
        return true;
    }
    return false;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    bool found= linearSearch(arr,10,22);
    if(found)
    cout<<"Key is present!";
    else
    cout<<"Key is not present!";
    return 0;
}