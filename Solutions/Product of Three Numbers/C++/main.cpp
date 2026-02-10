// Problem: Product of Three Numbers
// Link to the problem: https://codeforces.com/contest/1294/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    stack<ll> factors;
    while (n % 2 == 0)
    {
        factors.push(2);
        n /= 2;
    }
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                factors.push(i);
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        factors.push(n);
    }
    const ll a = factors.top();
    factors.pop();
    if (factors.empty())
    {
        cout << "NO" << endl;
        return;
    }
    ll b = factors.top();
    factors.pop();
    if (factors.empty())
    {
        cout << "NO" << endl;
        return;
    }
    if (a == b)
    {
        b *= factors.top();
        factors.pop();
    }
    if (factors.empty())
    {
        cout << "NO" << endl;
        return;
    }
    ll c = 1;
    while (!factors.empty())
    {
        c *= factors.top();
        factors.pop();
    }
    if (b == c || a == c)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout << a << " " << b << " " << c << endl;
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