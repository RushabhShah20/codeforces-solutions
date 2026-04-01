// Problem: Dawid and Bags of Candies
// Link to the problem: https://codeforces.com/contest/1230/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if (a1 + a2 == a3 + a4 || a1 + a3 == a2 + a4 || a1 + a4 == a2 + a3 || a1 == a2 + a3 + a4 || a2 == a1 + a3 + a4 || a3 == a1 + a2 + a4 || a4 == a1 + a2 + a3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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