// pair of elements to find the sum in unsorted array
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
//    unordered_set<int> s(arr.begin(), arr.end());
    int sum;
    cin >> sum;
    bool flag = false;


    unordered_set<int> s;
    int i;
    for(i=0;i<n;i++)
    {
        if(s.find(sum-arr[i])!=s.end())
            {
                flag=true;
                break;
            }
        s.insert(arr[i]);    
    }

    // int i = 0;
    // int sal;
    // for (; i < n; i++)
    // {
    //     sal = sum - arr[i];
    //     if (s.find(sal) != s.end() && *(s.find(sal)) != arr[i])
    //     {
    //         flag = true;
    //         break;
    //     }
    // }
    if (flag == true)
    {
        cout << arr[i] << " " << sum-arr[i];
    }
    else
        cout << "does not exists";
}