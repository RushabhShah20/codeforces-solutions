// Problem: Alena's Schedule
// Link to the problem: https://codeforces.com/contest/586/problem/A
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
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            if (l == -1)
            {
                l = i;
            }
            r = i;
        }
    }
    if (l == -1)
    {
        cout << 0 << endl;
        return;
    }
    ll ans = 0;
    for (int i = l; i <= r; i++)
    {
        if (a[i] == 1 || (a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1))
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
    solve();
    return 0;
}