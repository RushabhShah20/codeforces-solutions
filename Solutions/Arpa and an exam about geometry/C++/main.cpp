// Problem: Arpa and an exam about geometry
// Link to the problem: https://codeforces.com/contest/851/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    const ll x = (ax - bx) * (ax - bx) + (ay - by) * (ay - by), y = (bx - cx) * (bx - cx) + (by - cy) * (by - cy);
    const bool z = (by - ay) * (cx - bx) == (cy - by) * (bx - ax);
    const string ans = x == y && !z ? "Yes" : "No";
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