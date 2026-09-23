// Problem: Divisors of Two Integers
// Link to the problem: https://codeforces.com/contest/1108/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    multiset<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    sort(a.begin(), a.end());
    const ll x = a[n - 1];
    for (ll i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            const multiset<ll>::iterator it = s.find(i);
            if (it != s.end())
            {
                s.erase(it);
            }
        }
    }
    const ll y = *s.rbegin();
    cout << x << " " << y << endl;
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