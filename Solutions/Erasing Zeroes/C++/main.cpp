// Problem: Erasing Zeroes
// Link to the problem: https://codeforces.com/contest/1303/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    const ll a = s.find_first_of('1'), b = s.find_last_of('1');
    for (ll i = a; i <= b; i++)
    {
        if (s[i] == '0')
        {
            ans++;
        }
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