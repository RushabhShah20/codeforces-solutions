// Problem: Lucky Sum
// Link to the problem: https://codeforces.com/contest/121/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    vector<ll> a;
    for (ll i = 1; i <= 10; i++)
    {
        for (ll j = 0; j < (1LL << i); j++)
        {
            string s;
            cin >> s;
            for (ll k = i - 1; k >= 0; k--)
            {
                s += (j >> k) & 1 ? '7' : '4';
            }
            a.push_back(stoll(s));
        }
    }
    ll ans = 0, j = 0;
    while (a[j] < l)
    {
        j++;
    }
    for (ll i = l; i <= r; i++)
    {
        if (a[j] < i)
        {
            j++;
        }
        ans += a[j];
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