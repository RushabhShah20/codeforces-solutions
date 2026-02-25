// Problem: 123-sequence
// Link to the problem: https://codeforces.com/contest/52/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, one = 0, two = 0, three = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            one++;
        }
        else if (x == 2)
        {
            two++;
        }
        else
        {
            three++;
        }
    }
    const ll ans = n - max({one, two, three});
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