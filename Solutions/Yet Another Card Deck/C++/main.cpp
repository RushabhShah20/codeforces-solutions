// Problem: Yet Another Card Deck
// Link to the problem: https://codeforces.com/contest/1511/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(51, 1000000000);
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        a[x] = min(a[x], i);
    }
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        const ll ans = a[x];
        cout << ans << " ";
        for (ll j = 1; j <= 50; j++)
        {
            if (a[j] < ans)
            {
                a[j]++;
            }
        }
        a[x] = 1;
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
    solve();
    return 0;
}