// Problem: Little Girl and Game
// Link to the problem: https://codeforces.com/contest/276/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    vector<ll> a(26, 0);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    ll x = 0;
    for (ll i = 0; i < 26; i++)
    {
        x += (a[i] & 1);
    }
    const string ans = x <= 1 ? "First" : (x & 1 ? "First" : "Second");
    cout << ans << endl;
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