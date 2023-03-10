// check for subbray with sum s
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    bool flag=false;
    int sum;cin>>sum;
    int pre_sum=0;
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        int val=sum-arr[i];
        if(s.find(val)==s.end())
        {
            flag=true;
            break;
        }
        if(pre_sum==sum)
        {
            flag=true;
            break;
        }
        else{
            flag=false;
            s.insert(pre_sum);
        }

    }    
    if(flag==true)
        cout<<"YES";
    else
        cout<<"NO";    
}
