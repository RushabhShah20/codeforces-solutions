// Problem: Curriculum Vitae
// Link to the problem: https://codeforces.com/contest/846/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll z = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        z += a[i];
    }
    ll ans = z, x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            x++;
            ans = max(ans, x + z - y);
        }
        else
        {
            y++;
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