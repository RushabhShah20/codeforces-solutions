// Problem: Exam
// Link to the problem: https://codeforces.com/contest/534/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 2)
    {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    if (n == 3)
    {
        cout << 2 << endl;
        cout << 1 << " " << 3 << endl;
        return;
    }
    cout << n << endl;
    for (ll i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }
    for (ll i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
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