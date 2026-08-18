// Problem: Accounting
// Link to the problem: https://codeforces.com/contest/30/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    if (a == 0)
    {
        const string ans = b == 0 ? "0" : "No solution";
        cout << ans << endl;
        return;
    }
    if (b % a == 0)
    {
        const ll y = b / a;
        if (y < 0 && !(n & 1))
        {
            cout << "No solution" << endl;
            return;
        }
        const ll x = powl(abs(y), (long double)(1) / n);
        const string ans = (ll)powl(x, n) == abs(y) ? to_string(y < 0 ? -x : x) : "No solution";
        cout << ans << endl;
    }
    else
    {
        cout << "No solution" << endl;
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