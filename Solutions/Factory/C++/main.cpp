// Problem: Factory
// Link to the problem: https://codeforces.com/contest/485/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    unordered_set<ll> s;
    while (s.count(0) == 0)
    {
        if (s.count(a % b) != 0)
        {
            break;
        }
        s.insert(a % b);
        a += a % b;
    }
    const string ans = a % b == 0 ? "Yes" : "No";
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