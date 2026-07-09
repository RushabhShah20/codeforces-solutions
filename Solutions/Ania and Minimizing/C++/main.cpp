// Problem: Ania and Minimizing
// Link to the problem: https://codeforces.com/contest/1230/problem/B
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
    if (n == 1)
    {
        const string t = k == 0 ? s : "0";
        cout << t << endl;
        return;
    }
    if (s[0] != '1' && k > 0)
    {
        s[0] = '1';
        k--;
    }
    for (ll i = 1; i < n; i++)
    {
        if (k == 0)
        {
            break;
        }
        if (s[i] != '0')
        {
            s[i] = '0';
            k--;
        }
    }
    cout << s << endl;
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