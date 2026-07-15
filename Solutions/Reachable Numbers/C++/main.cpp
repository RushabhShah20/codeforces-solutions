// Problem: Reachable Numbers
// Link to the problem: https://codeforces.com/contest/1157/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> s;
    ll ans = 0;
    while (s.count(n) == 0)
    {
        s.insert(n);
        n += 1;
        while (n % 10 == 0)
        {
            n /= 10;
        }
        ans++;
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