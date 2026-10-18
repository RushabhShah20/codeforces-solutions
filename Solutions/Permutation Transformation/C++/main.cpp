// Problem: Permutation Transformation
// Link to the problem: https://codeforces.com/contest/1490/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void build(const ll l, const ll r, const ll k, const vector<ll> &a, vector<ll> &ans)
{
    if (l >= r)
    {
        return;
    }
    ll mx = -1, j = -1;
    for (ll i = l; i < r; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            j = i;
        }
    }
    ans[j] = k;
    build(l, j, k + 1, a, ans);
    build(j + 1, r, k + 1, a, ans);
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> ans(n);
    build(0, n, 0, a, ans);
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