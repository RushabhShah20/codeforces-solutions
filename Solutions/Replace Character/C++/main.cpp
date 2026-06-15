// Problem: Replace Character
// Link to the problem: https://codeforces.com/contest/2047/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, ll> a;
    for (ll i = 0; i < n; i++)
    {
        a[s[i]]++;
    }
    ll mx = 0, mn = n + 1;
    for (const pair<char, ll> i : a)
    {
        mx = max(mx, i.second);
        mn = min(mn, i.second);
    }
    char c = '0';
    for (const pair<char, ll> i : a)
    {
        if (i.second == mx)
        {
            c = i.first;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[s[i]] == mn && s[i] != c)
        {
            s[i] = c;
            break;
        }
    }
    cout << s << endl;
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