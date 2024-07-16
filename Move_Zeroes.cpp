#include <bits/stdc++.h>
using namespace std;

vector<int> MoveZeroes(vector<int> v)
{
    int j = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            v[j] = v[i];
            j++;
        }
    }
    for (int i = j; i < v.size(); i++)
    {
        v[i] = 0;
    }
    return v;
}
int main()
{
    vector<int> v{1, 2, 1, 0, 2, 0};
    vector<int> output = MoveZeroes(v);
    for (auto it : output)
    {
        cout << it << " ";
    }
}