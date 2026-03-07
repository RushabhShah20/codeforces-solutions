// Problem: Hit the Lottery
// Link to the problem: https://codeforces.com/contest/996/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    ans += (n / 100);
    n %= 100;
    ans += (n / 20);
    n %= 20;
    ans += (n / 10);
    n %= 10;
    ans += (n / 5);
    n %= 5;
    ans += n;
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