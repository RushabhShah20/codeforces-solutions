// Problem: Forbidden Subsequence
// Link to the problem: https://codeforces.com/contest/1617/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    unordered_map<char, ll> a;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        a[s[i]]++;
    }
    vector<pair<char, ll>> b(a.begin(), a.end());
    sort(b.begin(), b.end());
    const ll m = t.size();
    ll j = 0;
    const ll k = b.size();
    for (ll i = 0; i < k; i++)
    {
        if (j == m)
        {
            break;
        }
        if (t[j] == b[i].first)
        {
            j++;
        }
    }
    if (j == m)
    {
        swap(b[1], b[2]);
    }
    string ans;
    for (ll i = 0; i < k; i++)
    {
        ans.append(b[i].second, b[i].first);
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