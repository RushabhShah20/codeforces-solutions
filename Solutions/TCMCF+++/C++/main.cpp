// Problem: TCMCF+++
// Link to the problem: https://codeforces.com/contest/45/problem/I
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a, b, c;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > 0)
        {
            a.push_back(x);
        }
        else if (x < 0)
        {
            b.push_back(x);
        }
        else
        {
            c.push_back(x);
        }
    }
    if (a.empty() && b.empty())
    {
        cout << c[0] << endl;
    }
    else
    {
        if (a.empty())
        {
            sort(b.begin(), b.end());
            const ll m = b.size();
            if (m == 1)
            {
                if (c.empty())
                {
                    cout << b[0] << endl;
                }
                else
                {
                    cout << c[0] << endl;
                }
                return;
            }
            if (m & 1)
            {
                for (ll i = 0; i < m - 1; i++)
                {
                    cout << b[i] << " ";
                }
            }
            else
            {
                for (ll i = 0; i < m; i++)
                {
                    cout << b[i] << " ";
                }
            }
            cout << endl;
        }
        else if (b.empty())
        {
            const ll m = a.size();
            for (ll i = 0; i < m; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            sort(a.begin(), a.end(), greater<>());
            sort(b.begin(), b.end());
            const ll x = a.size(), y = b.size();
            for (ll i = 0; i < x; i++)
            {
                cout << a[i] << " ";
            }
            if (y & 1)
            {
                for (ll i = 0; i < y - 1; i++)
                {
                    cout << b[i] << " ";
                }
            }
            else
            {
                for (ll i = 0; i < y; i++)
                {
                    cout << b[i] << " ";
                }
            }
            cout << endl;
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
    solve();
    return 0;
}