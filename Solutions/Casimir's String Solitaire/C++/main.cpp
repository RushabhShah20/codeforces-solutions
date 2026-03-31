// Problem: Casimir's String Solitaire
// Link to the problem: https://codeforces.com/contest/1579/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll a = 0, b = 0, c = 0;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else if (s[i] == 'B')
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    if (a + c == b)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}