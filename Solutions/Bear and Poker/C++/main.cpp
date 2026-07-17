// Problem: Bear and Poker
// Link to the problem: https://codeforces.com/contest/573/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        while (x % 2 == 0)
        {
            x /= 2;
        }
        while (x % 3 == 0)
        {
            x /= 3;
        }
        s.insert(x);
    }
    const string ans = s.size() == 1 ? "Yes" : "No";
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