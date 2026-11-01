// Problem: Chat Order
// Link to the problem: https://codeforces.com/contest/637/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<string, ll> m;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] = i;
    }
    vector<pair<string, ll>> a(m.begin(), m.end());
    sort(a.begin(), a.end(), [](const pair<string, ll> &x, const pair<string, ll> &y)
         { return x.second > y.second; });
    const ll k = a.size();
    for (ll i = 0; i < k; i++)
    {
        cout << a[i].first << endl;
    }
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