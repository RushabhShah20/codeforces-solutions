// Problem: Eleven
// Link to the problem: https://codeforces.com/contest/918/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(vector<bool> &fib)
{
    ll n;
    cin >> n;
    string ans(n, 'o');
    for (ll i = 0; i < n; i++)
    {
        if (fib[i + 1])
        {
            ans[i] = 'O';
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<bool> fib(1001, false);
    ll x = 0, y = 1;
    fib[x] = fib[y] = true;
    ll z = x + y;
    x = y;
    y = z;
    while (z <= 1000)
    {
        fib[z] = true;
        z = x + y;
        x = y;
        y = z;
    }
    solve(fib);
    return 0;
}