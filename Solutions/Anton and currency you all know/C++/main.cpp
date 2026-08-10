// Problem: Anton and currency you all know
// Link to the problem: https://codeforces.com/contest/508/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll j = -1;
    for (ll i = 0; i < n; i++)
    {
        if (!(s[i] - '0' & 1))
        {
            j = i;
            if (s[n - 1] > s[i])
            {
                break;
            }
        }
    }
    if (j == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        swap(s[n - 1], s[j]);
        cout << s << endl;
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