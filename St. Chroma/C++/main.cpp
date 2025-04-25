// Problem: St. Chroma
// Link to the problem: https://codeforces.com/contest/2106/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = i;
        }
        if (n == x)
        {
            for (ll i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
        {
            ans.erase(find(ans.begin(), ans.end(), x));
            ans.push_back(x);
            for (ll i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}