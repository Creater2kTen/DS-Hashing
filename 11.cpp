//longest common consequetive sequence 

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
    unordered_set<int> us(arr.begin(),arr.end());
    int res=1;
    for(auto x:us)
    {
        if(us.find(x-1)==us.end())
        {
            int curr=1;
            while(us.find(x+curr)!=us.end())
            {
                curr++;

            }
            res=max(curr,res);
        }
    }
    cout<<"result"<<res;

    
}