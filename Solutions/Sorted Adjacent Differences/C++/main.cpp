// Problem: Sorted Adjacent Differences
// Link to the problem: https://codeforces.com/contest/1339/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll> ans;
    ll l = 0, r = n - 1;
    while (l <= r)
    {
        if (l == r)
        {
            ans.push_back(a[l]);
            break;
        }
        ans.push_back(a[l]);
        ans.push_back(a[r]);
        l++;
        r--;
    }
    reverse(ans.begin(), ans.end());
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