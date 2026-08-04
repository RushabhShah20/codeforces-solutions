// Problem: New Year Present
// Link to the problem: https://codeforces.com/contest/379/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    string ans;
    ll i = 0;
    bool z = true;
    while (x > 0)
    {
        if (a[i] > 0)
        {
            ans.append(1, 'P');
            a[i]--;
            x--;
        }
        if (x == 0)
        {
            break;
        }
        if (z)
        {
            ans.append(1, 'R');
            i++;
        }
        else
        {
            ans.append(1, 'L');
            i--;
        }
        if (i == n - 1)
        {
            z = false;
        }
        if (i == 0)
        {
            z = true;
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