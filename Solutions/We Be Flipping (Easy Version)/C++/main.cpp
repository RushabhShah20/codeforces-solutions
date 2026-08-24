// Problem: We Be Flipping (Easy Version)
// Link to the problem: https://codeforces.com/contest/2229/problem/C1
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
    bool x = true;
    vector<ll> ans;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] < 0 && !x)
        {
            ans.push_back(i + 1);
            x = true;
        }
        if (a[i] > 0 && x)
        {
            ans.push_back(i + 1);
            x = false;
        }
    }
    const ll m = ans.size();
    cout << m << endl;
    for (ll i = 0; i < m; i++)
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