// Problem: Keep it Beautiful
// Link to the problem: https://codeforces.com/contest/1841/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string ans(n, '0');
    vector<ll> a;
    bool y = true;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (a.empty())
        {
            a.push_back(x);
            ans[i] = '1';
        }
        else
        {
            if (y)
            {
                if (x >= a.back())
                {
                    a.push_back(x);
                    ans[i] = '1';
                }
                else if (x <= a.front())
                {
                    y = false;
                    a.push_back(x);
                    ans[i] = '1';
                }
            }
            else
            {
                if (x >= a.back() && x <= a.front())
                {
                    a.push_back(x);
                    ans[i] = '1';
                }
            }
        }
    }
    cout << ans << endl;
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