// longest subarray with equal no of 1 and 0
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
        if(val==0)
        arr.push_back(-1);
        else
        arr.push_back(1);
    }
    unordered_map<int,int> um;
    int presum=0;
    int flag=false;
    int res=0;
    for(int i=0;i<n;i++)
    {
        
        presum+=arr[i];
         if(presum==0)
        {
            // cout<<"hello 2\n";
            res=max(res,i+1 );
            
        }
        if(um.find(presum)==um.end())
        {   
            // cout<<"hello 1\n";
            um.insert({presum,i});
        }
       
        else//( um.find(presum)!=um.end())
        {
            // cout<<"hello 3\n";
            res=max(res,i-um[presum]);
        } 
    }
    cout<<res;

    return 0;
    

}