// Problem: Remove Duplicates
// Link to the problem: https://codeforces.com/contest/978/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), ans;
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s.find(a[i]) == s.end())
        {
            ans.push_back(a[i]);
            s.insert(a[i]);
        }
    }
    const ll m = ans.size();
    cout << m << endl;
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