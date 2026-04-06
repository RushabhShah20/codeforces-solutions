// Problem: Multiplication Table
// Link to the problem: https://codeforces.com/contest/39/problem/H
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll toBase(ll n, const ll k)
{
    string a;
    while (n > 0)
    {
        a.append(1, n % k + '0');
        n /= k;
    }
    reverse(a.begin(), a.end());
    const ll ans = stoll(a);
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 1; j < n; j++)
        {
            const ll ans = toBase(i * j, n);
            cout << ans << " ";
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
    solve();
    return 0;
}