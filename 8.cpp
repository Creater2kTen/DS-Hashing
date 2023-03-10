//leargest subarray haivng sum s
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int val;cin>>val;
        arr.push_back(val);
    }
    int sum;cin>>sum;
    unordered_map<int,int> umap;
    int presum=0;int res=0;
    for(int i=0;i<n;i++)
    {   
       // cout<<"He";
       presum+=arr[i];
       // cout<<presum;
        if(presum==sum)
        {
            res=max(res,i+1);
           
        }
        if(umap.find(presum-sum)!=umap.end())
        {
            res=max(res,i-umap[presum-sum]);
        }
        else//(umap.find(presum)==umap.end())
        {
                    umap.insert({presum,i});
        }
    }
    cout<<res;
}