// Problem: Hayato and School
// Link to the problem: https://codeforces.com/contest/1780/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> o, e;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x & 1)
        {
            o.push_back(i + 1);
        }
        else
        {
            e.push_back(i + 1);
        }
    }
    if (o.empty())
    {
        cout << "NO" << endl;
    }
    else
    {
        if (e.empty())
        {
            if (o.size() >= 3)
            {
                cout << "YES" << endl;
                cout << o[0] << " " << o[1] << " " << o[2] << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (o.size() >= 3)
            {
                cout << "YES" << endl;
                cout << o[0] << " " << o[1] << " " << o[2] << endl;
            }
            else if (!o.empty() && e.size() >= 2)
            {
                cout << "YES" << endl;
                cout << o[0] << " " << e[0] << " " << e[1] << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
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