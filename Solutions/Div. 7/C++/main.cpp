// Problem: Div. 7
// Link to the problem: https://codeforces.com/contest/1633/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 7 == 0)
    {
        cout << n << endl;
    }
    else
    {
        string s = to_string(n);
        for (ll i = 0; i < 10; i++)
        {
            s.back() = i + '0';
            const ll m = stoll(s);
            if (m % 7 == 0)
            {
                cout << m << endl;
                return;
            }
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}