#include <bits/stdc++.h>
using namespace std;
vector<int> SortColor(vector<int> v)
{
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            cnt0++;
        }
        else if (v[i] == 1)
        {
            cnt1++;
        }
        else if (v[i] == 1)
        {
            cnt2++;
        }
    }
    for (int i = 0; i < cnt0; i++)
    {
        v[i] = 0;
    }
    for (int i = cnt0; i < cnt0 + cnt1; i++)
    {
        v[i] = 1;
    }
    for (int i = cnt0 + cnt1; i < v.size(); i++)
    {
        v[i] = 2;
    }
    return v;
}
int main()
{
    vector<int> v{1, 2, 1, 0, 2, 0};
    vector<int> output = SortColor(v);
    for (auto it : output)
    {
        cout << it << " ";
    }
}