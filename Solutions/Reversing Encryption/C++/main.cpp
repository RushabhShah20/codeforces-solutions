// Problem: Reversing Encryption
// Link to the problem: https://codeforces.com/contest/999/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> a;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            const ll x = i, y = n / i;
            a.push_back(x);
            if (x != y)
            {
                a.push_back(y);
            }
        }
    }
    sort(a.begin(), a.end());
    const ll m = a.size();
    for (ll i = 0; i < m; i++)
    {
        reverse(s.begin(), s.begin() + a[i]);
    }
    cout << s << endl;
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