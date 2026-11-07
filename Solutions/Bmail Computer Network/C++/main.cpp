// Problem: Bmail Computer Network
// Link to the problem: https://codeforces.com/contest/1057/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 2; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<ll> ans;
    ll x = n;
    while (x != 0)
    {
        ans.push_back(x);
        x = a[x];
    }
    const ll m = ans.size();
    for (ll i = m - 1; i >= 0; i--)
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
    solve();
    return 0;
}