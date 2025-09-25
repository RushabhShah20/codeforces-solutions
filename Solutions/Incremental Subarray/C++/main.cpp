// Problem: Incremental Subarray
// Link to the problem: https://codeforces.com/contest/2151/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isIncreasing(vector<ll> arr)
{
    if (arr.empty() || arr.size() == 1)
    {
        return true;
    }
    for (size_t i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(m);
        for (ll i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        if (isIncreasing(a))
        {
            int x = *max_element(a.begin(), a.end());
            cout << n - x + 1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}
