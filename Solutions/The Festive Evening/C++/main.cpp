// Problem: The Festive Evening
// Link to the problem: https://codeforces.com/contest/834/problem/B
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
    vector<ll> a(26, -1), b(26, -1);
    for (ll i = 0; i < n; i++)
    {
        const ll j = s[i] - 'A';
        if (a[j] == -1)
        {
            a[j] = i;
        }
        b[j] = i;
    }
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        const ll j = s[i] - 'A';
        if (a[j] == i)
        {
            x++;
            if (x > k)
            {
                cout << "YES" << endl;
                return;
            }
        }
        if (b[j] == i)
        {
            x--;
        }
    }
    cout << "NO" << endl;
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