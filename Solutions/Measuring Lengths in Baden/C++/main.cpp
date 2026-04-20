// Problem: Measuring Lengths in Baden
// Link to the problem: https://codeforces.com/contest/125/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll m = n % 3 == 2 ? (n + 2) / 3 : n / 3;
    cout << m / 12 << " " << m % 12 << endl;
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