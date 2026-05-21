// Problem: Ostap and Grasshopper
// Link to the problem: https://codeforces.com/contest/735/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    const ll a = s.find('G'), b = s.find('T');
    if (a % k == b % k)
    {
        if (a > b)
        {
            for (ll i = a; i >= b; i -= k)
            {
                if (s[i] == '#')
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
        }
        else
        {
            for (ll i = a; i <= b; i += k)
            {
                if (s[i] == '#')
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
        }
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