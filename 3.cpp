//count intersecting elements of 2 array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++)
    {
        int val;cin>>val;
        ar.push_back(val);
    }
    
    int m;
    cin>>m;
    vector<int> br;
    for(int i=0;i<m;i++)
    {
        int val;cin>>val;
        br.push_back(val);
    }

    unordered_set<int> s(ar.begin(),ar.end());

    int count=0;
    for(int i=0;i<m;i++)
    {
        if(s.find(br[i])==s.end())
            continue;
        else
        {   count++;
            s.erase(br[i]);
        }    
    }
    cout<<count;
    return 0;
}