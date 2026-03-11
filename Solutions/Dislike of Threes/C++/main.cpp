// Problem: Dislike of Threes
// Link to the problem: https://codeforces.com/contest/1560/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a;
    ll i = 1;
    while (a.size() <= n)
    {
        if (i % 10 == 3)
        {
            i++;
        }
        if (i % 3 == 0)
        {
            i++;
        }
        else
        {
            a.push_back(i);
            i++;
        }
    }
    const ll ans = a[n - 1];
    cout << ans << endl;
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