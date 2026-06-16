// Problem: Metro
// Link to the problem: https://codeforces.com/contest/1055/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    if (a[0] == 0)
    {
        cout << "NO" << endl;
    }
    else if (a[k - 1] == 1)
    {
        cout << "YES" << endl;
    }
    else if (b[k - 1] == 1)
    {
        bool x = false;
        for (int i = k - 1; i < n; i++)
        {
            if (a[i] == 1 && b[i] == 1)
            {
                x = true;
                break;
            }
        }
        if (x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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
    solve();
    return 0;
}