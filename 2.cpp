//frequency of elements in a array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    // unordered_map<int,int> m;

    // for(int i=0;i<n;i++)
    // {   
    //     if(m.find(arr[i])==m.end())
    //     {
    //         m.insert(m.end(),{arr[i],1});
    //     }
    //     else
    //     {
    //             m[arr[i]]++;    
    //     }
    // }

    unordered_map<int,int> umap;
    for(int i=0;i<n;i++)
    umap[arr[i]]++;
    
    for(auto x: umap)
        cout<<x.first<<" "<<x.second<<"\n";
}