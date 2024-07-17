#include <bits/stdc++.h>
using namespace std;

int subArrayDivByK(vector<int> v, int k)
{
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < v.size(); j++)
        {
            sum += v[j];
            if (sum % k == 0)
            {
                cnt++;
            }
        }
    }
    return cnt++;
}

int main()
{
    vector<int> v{4, 5, 0, -2, -3, 1};
    int output = subArrayDivByK(v, 5);
    cout << output;
}