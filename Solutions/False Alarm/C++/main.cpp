// Problem: False Alarm
// Link to the problem: https://codeforces.com/contest/2117/problem/A
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
        cin >> a[i];
    }
    bool x = true, y = true;
    ll i = 0;
    while (i < n)
    {
        if (a[i] == 1)
        {
            if (x)
            {
                i += k;
                x = false;
            }
            else
            {
                y = false;
                break;
            }
        }
        else
        {
            i++;
        }
    }
    if (y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}