// Problem: Little Elephant and Numbers
// Link to the problem: https://codeforces.com/contest/221/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool sharesDigit(ll d, const string &s)
{
    string a = to_string(d);
    for (char c1 : a)
    {
        for (char c2 : s)
        {
            if (c1 == c2)
            {
                return true;
            }
        }
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    const string s = to_string(n);
    const ll m = s.size();
    ll ans = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (sharesDigit(i, s))
            {
                ans++;
            }
            if (i != n / i && sharesDigit(n / i, s))
            {
                ans++;
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