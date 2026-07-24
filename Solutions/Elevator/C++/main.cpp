// Problem: Elevator
// Link to the problem: https://codeforces.com/contest/120/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n;
    cin >> n;
    const string ans = (s == "front" && n == 1) || (s == "back" && n == 2) ? "L" : "R";
    cout << ans << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}