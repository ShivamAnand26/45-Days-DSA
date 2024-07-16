#include <bits/stdc++.h>
using namespace std;

void RemoveDuplicates(vector<int> v)
{
    int i = 0;
    for (int j = 0; j < v.size(); j++)
    {
        if (v[i] != v[j])
        {
            v[i + 1] = v[j];
            i++;
        }
    }
    for (int k = 0; k <= i; k++)
    {
        cout << v[k] << " ";
    }
}
int main()
{
    // vector<int> v{0, 0, 1, 1, 1, 2, 2};
    vector<int> v{1, 1, 2};
    RemoveDuplicates(v);
}