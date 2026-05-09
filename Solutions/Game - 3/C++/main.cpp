// Problem: Game
// Link to the problem: https://codeforces.com/contest/513/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    const string ans = n1 > n2 ? "First" : "Second";
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