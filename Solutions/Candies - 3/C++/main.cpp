// Problem: Candies
// Link to the problem: https://codeforces.com/contest/1810/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        vector<ll> ans;
        while (n > 1)
        {
            if (((n - 1) / 2) & 1)
            {
                ans.push_back(2);
                n = (n - 1) / 2;
            }
            else
            {
                ans.push_back(1);
                n = (n + 1) / 2;
            }
        }
        reverse(ans.begin(), ans.end());
        const ll m = ans.size();
        if (m > 40)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << m << endl;
            for (ll i = 0; i < m; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}