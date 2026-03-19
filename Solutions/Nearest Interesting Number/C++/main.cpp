// Problem: Nearest Interesting Number
// Link to the problem: https://codeforces.com/contest/1183/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll sum(ll n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    while (sum(n) % 4 != 0)
    {
        n++;
    }
    cout << n << endl;
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