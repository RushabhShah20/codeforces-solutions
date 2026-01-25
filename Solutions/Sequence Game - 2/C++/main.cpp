// Problem: Sequence Game
// Link to the problem: https://codeforces.com/contest/1862/problem/B
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
    vector<ll> ans;
    ans.push_back(a[0]);
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            ans.push_back(a[i]);
            ans.push_back(a[i]);
        }
        else
        {
            ans.push_back(a[i]);
        }
    }
    cout << ans.size() << endl;
    for (const ll i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}