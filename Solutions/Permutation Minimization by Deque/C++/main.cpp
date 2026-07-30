// Problem: Permutation Minimization by Deque
// Link to the problem: https://codeforces.com/contest/1579/problem/E1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    deque<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (!ans.empty() && ans.front() > x)
        {
            ans.push_front(x);
        }
        else
        {
            ans.push_back(x);
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