#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Creation
    unordered_map<string,int> mpp;
    // Insertion
    pair <string,int> a = make_pair ("love", 2);
    mpp.insert(a);
    pair<string, int> b ("babbar",3);
    mpp.insert(b);
    mpp["mera"] = 6;

    cout<<mpp.size()<<endl;
    cout<<mpp.count("love")<<endl;
    cout<<mpp.at("babbar")<<endl;

    return 0;
}