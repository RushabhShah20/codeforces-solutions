// Problem: The Way to Home
// Link to the problem: https://codeforces.com/contest/910/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    ll ans = 0;
    for (ll i = n - 1; i > 0;)
    {
        ll k = i;
        for (ll j = i - 1; j >= max(0LL, i - d); j--)
        {
            if (s[j] == '1')
            {
                k = j;
            }
        }
        if (k == i)
        {
            cout << -1 << endl;
            return;
        }
        ans++;
        i = k;
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
    solve();
    return 0;
}