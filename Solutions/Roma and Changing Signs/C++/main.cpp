// Problem: Roma and Changing Signs
// Link to the problem: https://codeforces.com/contest/262/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll mn = 100001;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, abs(a[i]));
    }
    for (ll i = 0; i < n; i++)
    {
        if (k == 0)
        {
            break;
        }
        if (a[i] < 0)
        {
            a[i] *= -1;
            k--;
        }
    }
    ll ans = k == 0 || !(k & 1) ? 0 : -2 * mn;
    for (ll i = 0; i < n; i++)
    {
        ans += a[i];
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