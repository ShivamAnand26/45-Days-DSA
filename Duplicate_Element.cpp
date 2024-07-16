#include <bits/stdc++.h>
using namespace std;

int FindDuplicate(vector<int> v)
{
    map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second >= 2)
        {
            return i.first;
        }
    }
    return -1;
}

int main()
{
    vector<int> v{1, 4, 5, 4, 3};
    int output = FindDuplicate(v);
    cout << output;
}