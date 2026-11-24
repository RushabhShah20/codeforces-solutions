// Problem: A TRUE Battle
// Link to the problem: https://codeforces.com/contest/2030/problem/C
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
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == '1' && s[i - 1] == '1')
        {
            cout << "YES" << endl;
            return;
        }
    }
    const string ans = s[0] == '1' || s[n - 1] == '1' ? "YES" : "NO";
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