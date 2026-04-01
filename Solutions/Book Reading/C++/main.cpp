// Problem: Book Reading
// Link to the problem: https://codeforces.com/contest/884/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = 86400 - x;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (k > 0)
        {
            k -= a[i];
            ans++;
        }
        else
        {
            break;
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
    solve();
    return 0;
}