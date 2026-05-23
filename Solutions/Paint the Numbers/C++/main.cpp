// Problem: Paint the Numbers
// Link to the problem: https://codeforces.com/contest/1209/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    vector<bool> b(n, false);
    for (ll i = 0; i < n; i++)
    {
        if (!b[i])
        {
            ans++;
            for (ll j = i; j < n; j++)
            {
                if (a[j] % a[i] == 0)
                {
                    b[j] = true;
                }
            }
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