// Problem: Reverse Sort
// Link to the problem: https://codeforces.com/contest/1605/problem/B
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
    string t = s;
    sort(t.begin(), t.end());
    if (s == t)
    {
        cout << 0 << endl;
        return;
    }
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        x += s[i] == '0';
    }
    vector<ll> c;
    for (ll i = 0; i < n; i++)
    {
        if ((i < x && s[i] == '1') || (i >= x && s[i] == '0'))
        {
            c.push_back(i + 1);
        }
    }
    const ll k = c.size();
    cout << 1 << endl;
    cout << k << " ";
    for (ll i = 0; i < k; i++)
    {
        cout << c[i] << " ";
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