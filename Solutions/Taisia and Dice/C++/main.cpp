// Problem: Taisia and Dice
// Link to the problem: https://codeforces.com/contest/1790/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, s, r;
    cin >> n >> s >> r;
    const ll mx = s - r;
    vector<ll> ans(n, 1);
    ans[0] = mx;
    r -= n - 1;
    for (ll i = 1; i < n; i++)
    {
        if (r >= mx - 1)
        {
            ans[i] = mx;
            r -= mx - 1;
        }
        else
        {
            ans[i] += r;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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