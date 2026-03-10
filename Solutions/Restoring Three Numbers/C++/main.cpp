// Problem: Restoring Three Numbers
// Link to the problem: https://codeforces.com/contest/1154/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll ab, ac, bc, abc;
    cin >> ab >> ac >> bc >> abc;
    vector<ll> x = {ab, bc, ac, abc};
    sort(x.begin(), x.end());
    const ll a = x.back() - x[0], b = x.back() - x[1], c = x.back() - x[2];
    cout << a << " " << b << " " << c << endl;
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