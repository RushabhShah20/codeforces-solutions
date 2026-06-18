// Problem: Hongcow Learns the Cyclic Shift
// Link to the problem: https://codeforces.com/contest/745/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a;
    cin >> a;
    const ll n = a.size();
    unordered_set<string> s;
    s.insert(a);
    for (ll i = 0; i < n; i++)
    {
        const string b = a.substr(1) + a[0];
        s.insert(b);
        a = b;
    }
    const ll ans = s.size();
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