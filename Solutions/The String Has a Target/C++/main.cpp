// Problem: The String Has a Target
// Link to the problem: https://codeforces.com/contest/1805/problem/B
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
    char mn = 'z';
    for (ll i = 0; i < n; i++)
    {
        mn = min(mn, s[i]);
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == mn)
        {
            s.erase(i, 1);
            s.insert(0, 1, mn);
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