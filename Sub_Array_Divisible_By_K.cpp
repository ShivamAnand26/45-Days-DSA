#include <bits/stdc++.h>
using namespace std;

// int subArrayDivByK(vector<int> v, int k)
// {
//     int cnt = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         int sum = 0;
//         for (int j = i; j < v.size(); j++)
//         {
//             sum += v[j];
//             if (sum % k == 0)
//             {
//                 cnt++;
//             }
//         }
//     }
//     return cnt;
// }

// Method 2
int subArrayDivByK(vector<int> v, int k)
{
    int sum = 0;
    int n = v.size();
    int cnt = 0;

    unordered_map<int, int> m;
    m[0] = 1;

    for (int i : v)
    {
        sum += i;
        int mod = sum % k;
        if (mod < 0)
        {
            mod += k;
        }
        if (m.find(mod) != m.end())
        {
            cnt += m[mod];
        }
        m[mod]++;
    }
    return cnt;
}

int main()
{
    vector<int> v{4, 5, 0, -2, -3, 1};
    int output = subArrayDivByK(v, 5);
    cout << output;
}