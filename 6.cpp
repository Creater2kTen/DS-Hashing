// check for subbray with sum 0
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
    unordered_set<int> s;
    int um = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int prefix_sum = arr[i];
        if (s.find(prefix_sum) == s.end())
        {
            s.insert(prefix_sum);
        }
        if (prefix_sum == 0) // {-3,2,1,4} so in this case the sum wont be considering 1st subaray since 0 wont be found in prefix
        {
            flag = true;
            break;
        }
        else
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
        cout << "YES";
    else
        cout << "NO";
}
