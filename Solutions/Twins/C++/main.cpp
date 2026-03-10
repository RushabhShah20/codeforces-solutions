// Problem: Twins
// Link to the problem: https://codeforces.com/contest/160/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = 0, x = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    sort(a.begin(), a.end(), greater<>());
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (y <= x - y)
        {
            y += a[i];
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