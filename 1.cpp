//count distinct elements in a array/vector

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;

    // O(n)
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }



    //better version
    unordered_set<int> de(arr.begin(),arr.end());
    
    // unordered_set<int> de;
    // // theta(n) time O(n)space 
    // for(int i=0;i<n;i++)
    // de.insert(arr[i]);

    //O(1)
    cout<<de.size();

    return 0;


}