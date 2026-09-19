// Problem: Passwords
// Link to the problem: https://codeforces.com/contest/721/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string t;
    cin >> t;
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i].size() < t.size())
        {
            a++;
        }
        if (s[i].size() == t.size())
        {
            b++;
        }
    }
    const ll x = a + 1 + a / k * 5, y = a + b + (a + b - 1) / k * 5;
    cout << x << " " << y << endl;
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