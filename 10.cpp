// longest common span with same sum in two binary array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> b1,b2;
    for(int i=0;i<n;i++)
    {
        int val;cin>>val;
        b1.push_back(val);
    }

    for(int i=0;i<n;i++)
    {
        int val;cin>>val;
        b2.push_back(val);
    }
    //subttracting two subarrays
    for(int i=0;i<n;i++)
    {
        b2[i]=b1[i]-b2[i];
   // cout<<"b2 "<<i<<" "<<b2[i]<<"\n";
    }
    unordered_map<int,int> um;
    int presum=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        presum+=b2[i];
       // cout<<"persum="<<presum<<" b2[i]="<<b2[i]<<"\n";
        if(presum==0)
        {
            //cout<<"\nHere 1 with presum="<<presum<<"\n";
            res=max(res,i+1);
            //cout<<"\n1="<<res;
        }

        
        if(um.find(presum)==um.end())
        {
           // cout<<"\nHere 2 with presum="<<presum<<"\n";
            um.insert({presum,i});
            //cout<<"\n2="<<res;
        }
        
        else//(um.find(presum)!=um.end())
        {
           // cout<<"\nHere 3 with presum="<<presum<<"\n";
            res=max(res,i-b2[presum]);
           // cout<<"\n3="<<res;
        }

    }
    cout<<res;
}
