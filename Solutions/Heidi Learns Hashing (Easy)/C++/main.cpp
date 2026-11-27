// Problem: Heidi Learns Hashing (Easy)
// Link to the problem: https://codeforces.com/contest/1184/problem/A1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const string ans = n & 1 && n >= 5 ? "1 " + to_string((n - 3) >> 1) : "NO";
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