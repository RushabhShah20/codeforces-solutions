// Problem: Ternary XOR
// Link to the problem: https://codeforces.com/contest/1328/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string a(n, '0'), b(n, '0');
    bool x = false;
    for (ll i = 0; i < n; i++)
    {
        if (!x)
        {
            if (s[i] == '2')
            {
                a[i] = '1';
                b[i] = '1';
            }
            else if (s[i] == '1')
            {
                a[i] = '1';
                b[i] = '0';
                x = true;
            }
            else
            {
                a[i] = '0';
                b[i] = '0';
            }
        }
        else
        {
            a[i] = '0';
            b[i] = s[i];
        }
    }
    cout << a << endl;
    cout << b << endl;
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