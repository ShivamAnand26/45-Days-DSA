#include <bits/stdc++.h>
using namespace std;

int BestTimeSellBuyStock(vector<int> v)
{
    int maxl = v[0];
    int profit = 0;

    for (int i = 0; i < v.size(); i++)
    {
        int cost = v[i] - maxl;
        profit = max(profit, cost);
        maxl = min(maxl, v[i]);
    }
    return profit;
}
int main()
{
    vector<int> v{
        7, 1,
        5,
        3,
        6,
        4};
    int output = BestTimeSellBuyStock(v);
    cout << output;
}