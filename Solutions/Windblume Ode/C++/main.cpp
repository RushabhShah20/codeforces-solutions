// Problem: Windblume Ode
// Link to the problem: https://codeforces.com/contest/1583/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isPrime(const ll n)
{
    if (n % 2 == 0)
    {
        return false;
    }
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

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
    if (isPrime(x))
    {
        ll j = -1;
        cout << n - 1 << endl;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] & 1)
            {
                j = i;
                break;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (i != j)
            {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << n << endl;
        for (ll i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
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